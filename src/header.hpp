#pragma once

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
};