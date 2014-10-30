#include <iostream>
#include <string>
#include "piece_class.cpp"

using namespace std;

class Player // holds player properties
{
private:
	string name;
	int ID; // 1-4, decides turns and other events
	int start_move; // starting position on field, node ID
	int finish_move;// finish position on field, node ID
	bool is_bot;

public:
    Piece* piece_list[4];

	Player(string input_name, int input_ID, bool bot){
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
        for(int i = 0; i < 4; i++){
            piece_list[i] = new Piece(i+1,ID);
        }
	}
	~Player(){
        for(int i = 0; i < 4; i++){
            delete piece_list[i];
        }
	}

	string get_name(){
		return name;
	}
	int get_id(){
		return ID;
	}
	int get_start(){
		return start_move;
	}
	int get_finish(){
		return finish_move;
	}
	bool is_player_bot(){
		return is_bot;
	}

	void add_to_name(int x){
        name += to_string(x);
	}
};
