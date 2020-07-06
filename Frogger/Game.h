#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Terminal.h"
#include "Vec2D.h"
#include "Frog.h"
#include "Car.h"


class Game
{
public:
	
	Game(Terminal& term);

	bool is_done();
	void update(float dt);

	void draw();

private:
	void draw_game_over();
	
	float _elapsed_time;
	int _score;
	bool _game_over;
	bool _is_done;
	Terminal& _term;
	Car _car;
	Frog _frog;
	//std::vector<Wall> _walls;
};

#endif
