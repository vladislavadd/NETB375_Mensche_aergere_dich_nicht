#include "player_class.h"



Player::Player(string input_name,int input_ID,bool bot)
{
    ID = input_ID;
    name = input_name;
    is_bot = bot;

    switch(ID)
    {
        case 1:
            start_move = 0;
            finish_move = 39;
            break;
        case 2:
            start_move = 10;
            finish_move = 9;
            break;
        case 3:
            start_move = 20;
            finish_move = 19;
            break;
        case 4:
            start_move = 30;
            finish_move = 29;
            break;
        default:;
    }

    for(int i = 0; i < 4; i++)
    {
        piece_list[i] = new Piece(i+1,ID);
    }

}

Player::~Player()
{
    for(int i = 0; i < 4; i++)
    {
        delete piece_list[i];
    }
}


string Player::get_name()
{
    return name;
}
int Player::get_id()
{
    return ID;
}
int Player::get_start()
{
    return start_move;
}
int Player::get_finish()
{
    return finish_move;
}
bool Player::is_player_bot()
{
    return is_bot;
}
void Player::add_to_name(char x)
{
    name += x;
}
