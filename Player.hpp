//
// Created by ischelle on 05/05/2021.
//

#pragma once

#include "City.hpp"
#include "Board.hpp"
#include "Color.hpp"
#include <vector>
#include <string>
namespace pandemic {
    class Player {

    public:
        City current_city; // The current city the player is in
        std::vector <City> cards; // The player cards
        Board board;
        Player(Board board, City city); // init

        std::string role();

        Player take_card(City city);

        void build();

        Player drive(City city);

        Player fly_direct(City city);

        Player treat(City city);

        Player fly_charter(City city);

        Player fly_shuttle(City city);

        Player discover_cure(Color color);

        //also need to overload []
        int operator[](City); // returns the amount of disease cubes, sets the disease cubes


    };
}
#pragma once

