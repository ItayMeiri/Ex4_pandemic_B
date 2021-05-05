//
// Created by ischelle on 05/05/2021.
//

#pragma once
#include "Player.hpp"
namespace pandemic
{
class Dispatcher: public Player
{
public:
    Dispatcher(Board board, City city);
    // void treat(); // Can treat any city neighboring his current city, w/o throwing a card
};
}


