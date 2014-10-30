#include <iostream>

using namespace std;

class Field // represents the game field with a simple data structure resembeling
			// an array of the 56 positions of the game field, with an extension of 6 home position nodes
{			// to every finish position node
private:
	struct Node // the node structure for the list representing the 56 game positions + the 24 home positions
	{
		int ID; //0-78 IDs of the nodes used to find them in an aray of pointers to the nodes
		int state; // 0 position is empty, 1-4 number of pieces stacked
		int player_id; // 0 no player here, 1-4 ID of player on this position

        Node(){
        state = 0;
        player_id = 0;
        }
	};

public:
    Node* field_list[56];
	Field(){
		for(int i = 0; i < 56; i++){
			field_list[i] = new Node();
			field_list[i]->ID = i;
		}
	}
	~Field(){
		for(int i = 0; i < 56; i++){
			delete field_list[i];
		}
	}
	int get_position_state(int pos_id){
		return field_list[pos_id]->state;
	}
	int get_position_player(int pos_id){
		return field_list[pos_id]->player_id;
	}
};

