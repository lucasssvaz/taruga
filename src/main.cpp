#include "include/taruga.hpp"

//! Development file of Taruga. Will be deleted once this is no longer a WIP.

void recursive_koch(taruga::Turtle& turtle, int length, int depth)
{
    if(depth == 0)
    {
        turtle.forward(length);
        return;
    }
    recursive_koch(turtle, length, depth-1);
    turtle.turn_right(60);
    recursive_koch(turtle, length, depth-1);
    turtle.turn_left(120);
    recursive_koch(turtle, length, depth-1);
    turtle.turn_right(60);
    recursive_koch(turtle, length, depth-1);
}

int main()
{
    taruga::Turtle turtle;
    turtle.verbosity = taruga::Verbosity::VeryVerbose;

    turtle.pen_up();
    turtle.turn_right(90);
    turtle.backwards(850);
    turtle.turn_left(90);
    turtle.forward(190);
    turtle.turn_right(90);

    turtle.pen_down();
    recursive_koch(turtle, 5, 5);

    turtle.act();

    return 0;
}
