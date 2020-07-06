#include "Game.h"
#include <random>

Game::Game(Terminal& term) :
    _score(0),
    _game_over(false),
    _is_done(false),
    _term(term),
   
{}

bool Game::is_done()
{
    return _is_done;
}

void Game::update(float dt)
{
    char pressed = _term.get_key();
    switch (pressed) {
    case 'r':
        _game_over = false;
        _car = Car(_term);
        _frog = Frog(_term);
        break;

    case 'q':
        _is_done = true;
        break;

    default:
        break;
    }

    _elapsed_time += dt;
    if (_elapsed_time >= 0.1f)
    {
        if (!_game_over) {
            _frog.update();
           /*if (_snake.collides_with(_food)) {
                _snake.grow();
                _score += 10;
            }*/

            if (_frog.collides_with(_car)) {
                _game_over = true;
            }
        }
        _elapsed_time = 0.f;
    }
}

void Game::draw()
{
    if (_game_over) {
        draw_game_over();
        return;
    }

    _term.clear();
    _frog.draw(_term);
    _car.draw(_term);

    _term.sleep(1);
}

void Game::draw_game_over()
{
    std::string score_text = "Game Over! You got '" + std::to_string(_score) + "' points.";
    std::string reset_text = "Press 'r' to restart.";

    int half_width = _term.width() / 2;
    int half_height = _term.height() / 2;

    _term.draw_text(half_width - score_text.size() / 2, half_height, score_text);
    _term.draw_text(half_width - reset_text.size() / 2, half_height + 1, reset_text);
}
