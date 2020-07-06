#ifndef CAR_H
#define CAR_H

#include "Vec2D.h"

class Terminal;
class Vec2D;

class Car
{
public:
    Car();
    void draw(Terminal& term);
    // void move_car(char get_key());

private:
    enum class MoveDirection
    {
        LEFT,
        RIGHT
    };

    MoveDirection _dir;
    Vec2D _pos;
};

#endif