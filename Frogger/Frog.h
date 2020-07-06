#ifndef FROG_H
#define FROG_H
#include <vector>
#include "Vec2D.h"

class Terminal;
class Vec2D;

class Frog
{
public:
    Frog(Terminal& term);
    void draw(Terminal& term);
    // void move_frog(char get_key());

private:
    enum class MoveDirection
    {
        LEFT,
        RIGHT,
        UP
    };

    MoveDirection _dir;
    std::vector<Vec2D> _position;
};

#endif
