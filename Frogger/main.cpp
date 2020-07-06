#include <chrono>
#include <vector>
#include <cstdlib>
//#include <ctime>
#include <iostream>
#include <curses.h>
#include "Terminal.h"
#include "Frog.h"
#include "Car.h"


int main()
{
	Terminal term(40, 20);
	Frog frog(term);
	frog.draw(term);
	//return 0;
}
