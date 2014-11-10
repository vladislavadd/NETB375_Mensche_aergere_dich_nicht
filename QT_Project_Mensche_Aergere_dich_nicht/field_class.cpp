#include "field_class.h"

Field::Field()
{
    for(int i = 0; i < 56; i++)
    {
        field_list[i] = new Node();
        field_list[i]->ID = i;
    }
}
Field::~Field()
{
    for(int i = 0; i < 56; i++)
    {
        delete field_list[i];
    }
}
int Field::get_position_state(int pos_id)
{
    return field_list[pos_id]->state;
}
int Field::get_position_player(int pos_id)
{
    return field_list[pos_id]->player_id;
}
