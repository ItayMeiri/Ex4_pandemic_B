//
// Created by ischelle on 05/05/2021.
//

#pragma once

#include "Player.hpp"
namespace pandemic {
    class Scientist : public Player {
    public:
        int n;
        Scientist(Board board, City city, int n);
        // Player discover_cure(); // Can discover a cure with `n` cards instead of 5
    };
}
