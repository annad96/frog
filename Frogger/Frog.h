#ifndef FROG_H
#define FROG_H

#include "Vec2D.h"

class Terminal;
class Vec2D;

class Frog
{
public:
    Frog();
    void draw();
   // void move_frog(char get_key());

private:
    enum class MoveDirection
    {
        LEFT,
        RIGHT,
        UP
    };

    MoveDirection _dir;
    Vec2D _position;
};

#endif
