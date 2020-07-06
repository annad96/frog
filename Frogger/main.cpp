#include <chrono>
#include <vector>
#include <cstdlib>
//#include <ctime>
#include <iostream>
#include <curses.h>
#include <chrono>
#include <iostream>
#include "Terminal.h"
#include "Frog.h"
#include "Car.h"
#include "Game.h"

#include <stdio.h>
#include <string>


int main()
{
	Terminal term(41, 20);
	Frog frog(term);
	frog.draw(term);
	//return 0;
}
