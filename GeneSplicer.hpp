//
// Created by ischelle on 05/05/2021.
//

#pragma once

#include "Player.hpp"

namespace pandemic{
    class GeneSplicer : public Player
    {
    public:
        GeneSplicer(Board board, City city);
    };
}
