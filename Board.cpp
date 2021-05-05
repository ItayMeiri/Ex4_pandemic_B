//
// Created by ischelle on 05/05/2021.
//
#include "Board.hpp"
#include <fstream>
#include <iostream>
#include <istream>
#include <sstream>
#include <string>

namespace pandemic {
Board::Board() {
  //Populate color_map
  color_map.insert(std::make_pair("Yellow", Color::Yellow));
  color_map.insert(std::make_pair("Black", Color::Black));
  color_map.insert(std::make_pair("Blue", Color::Blue));
  color_map.insert(std::make_pair("Red", Color::Red));
  // populate enum_map
  std::unordered_map<std::string, City> enum_map;
  std::string file_path = "cities_map.txt";
  std::ifstream is(file_path);
  std::string str;
  int enum_counter = 0;
  while (std::getline(is, str)) {
    size_t index = str.find_first_of(' '); // Tokyo Yellow
    std::string substr = str.substr(0, index);
    std::cout << " initializing enum_map with: " << str + "\n";
    std::cout << " substr is: " + substr + " with counter " << enum_counter
              << std::endl;
    enum_map.insert(std::make_pair(substr, City(enum_counter)));
    board.insert(std::make_pair(City(enum_counter), CityData{}));
    enum_counter++;
  }
  std::cout << "Finished initialization! \n";
  std::ifstream ifs(file_path);
  str = "";
  while (std::getline(ifs, str)) {
    Color c = Color::Yellow;
    City cit = City::Algiers;
    std::istringstream istr(str);
    std::cout << " ** STARTING NEIGHBOR/COLOR INITIALIZATION ** \n";
    int counter = 0;
    do {
      std::string sub;
      istr >> sub;
      std::cout << "sub is: " + sub + ".\n";
      if (sub.empty()) {
        break;
      }
      if (counter == 0) { // Update current city
        std::cout << " Counter " << counter << " getting city from enum_map\n";
        cit = enum_map.at(sub);
      }
      if (counter == 1) { // Initialize color
        std::cout << " Counter " << counter << " getting color from "
                  << sub + ".\n";
        c = color_map.at(sub);
        board.at(cit).col = c;
      }
      if (counter > 1) { // Update Neighbors
        // Neighbors
        City ni = enum_map.at(sub);
        // insert neighbor to my city
        board.at(cit).neighbors.push_front(ni);
      }
      counter++;
    } while (istr);
  }
}
bool Board::cured(Color c) {
  return cured_diseases.find(c) != cured_diseases.end();
}
int &Board::operator[](City c) {
  if (board.find(c) == board.end()) {
      std::string empty = std::to_string(board.empty());
      throw std::invalid_argument("No such city exists " + empty);
  }
  return *(board.at(c).level);
}
bool Board::is_clean() { 
    for(auto &it : board)
    {
        if(it.second.level != 0)
        {
            return false;
        }
    }
    return true; 
    }
void Board::remove_cures() {
    cured_diseases.clear(); // for testing purposes
}
std::ostream &operator<<(std::ostream &os, const Board &b) { return os; }

} // namespace pandemic
