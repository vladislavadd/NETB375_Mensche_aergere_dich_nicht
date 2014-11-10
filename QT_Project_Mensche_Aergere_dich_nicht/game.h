#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
#include <cstdlib>
#include "time.h"

//-------------------//

#include "player_class.cpp"
#include "field_class.cpp"
#include "template_stack_class.cpp"

class Game
{


public:
    bool done;
    int player_num;
    int ai_num;

    Player* player_list[4];
    Field* game_field;

    Game(int input_player_num, int input_ai_num);
    ~Game();
    int dice();
};

#endif // GAME_H
