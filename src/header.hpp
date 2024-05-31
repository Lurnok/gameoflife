#pragma once

#include <array>

struct Coordinates{
    int x;
    int y;
};

class Cell{
    private:
        bool alive;
        Coordinates coords;
    public:
        Cell(Coordinates coords, bool alive);

        int aliveNeighbors();

        bool nextState();
};

class Environment{
    private:
        int height, width;
    public:
        Environment(int height, int width);
};