//
// Created by ischelle on 05/05/2021.
//

#pragma once

#include "Player.hpp"
namespace pandemic {

    class OperationsExpert : public Player
{
    public:
    OperationsExpert(Board board, City city);
    OperationsExpert build(); // This type of player can build anywhere he's in, without throwing a card
};

}
