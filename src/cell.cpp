#include "header.hpp"

Cell::Cell(Coordinates coords, bool alive){
    this->coords = coords;
    this->alive = alive;
}

bool Cell::nextState(){
    int aliveNeighbors = this->aliveNeighbors();
    if(this->alive)
        return (aliveNeighbors == 2 || aliveNeighbors == 3);
    else
        return (aliveNeighbors == 3);
    
}

