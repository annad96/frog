#include "Car.h"
#include "Terminal.h"
#include <string>
#include <random>


Car::Car(Terminal& term)
	//_dir(MoveDirection::RIGHT); _dir(MoveDirection::LEFT);
{
	_pos = { {0,0} };
}

void Car::draw(Terminal& term) {
	//if (_dir == RIGHT) {
	//for (int i = 0; i < car.size(); i++)
	//{	//car right
	term.set_cell(_pos[0].x - 1, _pos[0].y, '-');
	term.set_cell(_pos[0].x, _pos[0].y, ' ');
	term.set_cell(_pos[0].x + 1, _pos[0].y, '-');
	if (_dir == MoveDirection::RIGHT) {
		term.set_cell(_pos[0].x - 1, _pos[0].y, '0');
		term.set_cell(_pos[0].x, _pos[0].y, 'H');
		term.set_cell(_pos[0].x + 1, _pos[0].y, '>');
	}
	if (_dir == MoveDirection::LEFT) {
		term.set_cell(_pos[0].x - 1, _pos[0].y, '<');
		term.set_cell(_pos[0].x, _pos[0].y, 'H');
		term.set_cell(_pos[0].x + 1, _pos[0].y, '0');
	}
	term.set_cell(_pos[0].x - 1, _pos[0].y, '-');
	term.set_cell(_pos[0].x, _pos[0].y, ' ');
	term.set_cell(_pos[0].x + 1, _pos[0].y, '-');
}
/*
void Car::move_car(std::vector<Vec2D>& car, Direction dir) {
	for (int i = 0; i < car.size(); i++) {
		if (dir == RIGHT) {
			car[i].x += 1;
		}
		if (dir == LEFT) {
			car[i].x -= 1;
		}
	}
}*/
