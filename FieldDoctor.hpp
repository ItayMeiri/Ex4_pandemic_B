//
// Created by ischelle on 05/05/2021.
//

#pragma once
#include "Player.hpp"
namespace pandemic
{
class FieldDoctor: public Player
{
public:
    FieldDoctor(Board board, City city);
    // void treat(); // Can treat any city neighboring his current city, w/o throwing a card
};
}


