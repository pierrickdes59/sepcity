#include "Game.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


Game::Game(Sep::Interface &io, std::string config)
{
    io_ = io;
    config_ = config;
    board_width_ = 20;
    board_height_ = 10;
    money_ = 100;
}

void Game::run()
{



}

bool Game::setField(Sep::Field &field, int x, int y)
{
    if(x <= field.board_width_ && y <= field.board_height_)
    {

        return "TRUE";
    }
    else
    {
        return  "FALSE";
    }

}
