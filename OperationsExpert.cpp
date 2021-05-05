//
// Created by ischelle on 05/05/2021.
//
#include "OperationsExpert.hpp"

namespace pandemic{

    OperationsExpert::OperationsExpert(Board board, City city) : Player(board, city)
    {
        //nothing
    }
    OperationsExpert OperationsExpert::build()
    {
        return *this;
    }
}