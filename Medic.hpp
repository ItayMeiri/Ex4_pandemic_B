//
// Created by ischelle on 05/05/2021.
//

#pragma once
#include "Player.hpp"

namespace pandemic
{
class Medic:public Player
{
public:
    Medic(Board board, City city);
    // void treat(); // When this player treats, he removes all levels, not just
    // 1 If a cure was already found, he automatically treats it
};
}
