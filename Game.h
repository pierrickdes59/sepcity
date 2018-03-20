#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <string>
#include <vector>
#include "Field.h"


class Game
{
    private:

    int board_width_, board_height_, money_;
    Sep::Interface& io_;
    std::string config_;

    std::vector<std::vector<Field::FieldType>> map_;


    public:

    Game(Sep::Interface &io, std::string config);
    void run();
    bool setField(Sep::Field &field, int x, int y);

};



#endif // GAME_H_INCLUDED
