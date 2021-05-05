//
// Created by ischelle on 05/05/2021.
//

#include "Player.hpp"

namespace pandemic {

Player::Player(Board board, City city) {
  this->board = std::move(board);
  this->current_city = std::move(city);
}

void Player::build() {
  // does something
}
Player Player::discover_cure(Color color) {
  // does something
  return *this;
}
Player Player::drive(City city) { return *this; }
Player Player::fly_charter(City city) { return *this; }
Player Player::fly_direct(City city) { return *this; }
Player Player::fly_shuttle(City city) { return *this; }
std::string Player::role() { return ""; }
Player Player::take_card(City city) { return *this; }
Player Player::treat(City city) { return *this; }
int Player::operator[](City) { return 1; }

} // namespace pandemic