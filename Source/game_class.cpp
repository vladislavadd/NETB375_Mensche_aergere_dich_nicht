#include <iostream>
#include <string>
#include <cstdlib>
#include "time.h"
#include "player_class.cpp"
#include "field_class.cpp"
#include "template_stack_class.cpp"

using namespace std;

class Game{
public:
	bool done;
	int player_num;
	int ai_num;

	Player* player_list[4];
	Field* game_field;

	Game(int input_player_num, int input_ai_num){
		player_num = input_player_num;
		ai_num = input_ai_num;
		string temp_name;

		if(player_num == 2){
			if(ai_num == 0){
				cout << "Enter name for Player 1: ";
				cin >> temp_name;
				player_list[0] = new Player(temp_name, 1, false);

				cout << "Enter name for Player 2: ";
				cin >> temp_name;
				player_list[1] = new Player(temp_name, 3, false);
			}
			else if(ai_num == 1){
				cout << "Enter name for Player 1: ";
				cin >> temp_name;
				player_list[0] = new Player(temp_name, 1, false);

				player_list[1] = new Player("Bot_1", 3, true);
			}
			else{
				player_list[0] = new Player("Bot_1", 1, true);
				player_list[1] = new Player("Bot_2", 3, true);
			}
		}
		else{
			for(int i = 0; i < player_num-ai_num; i++){
				cout << "Enter name for Player " << i+1 <<": ";
				cin >> temp_name;
				player_list[i] = new Player(temp_name, i+1, false);
			}
			for(int i = player_num-ai_num; i < 4; i++){
				player_list[i] = new Player("Bot_", i+1, true);
				player_list[i]->add_to_name(i+1);
			}
		}

        game_field = new Field();
	}
    ~Game(){
        for(int i = 0; i < player_num; i++){

            delete player_list[i];
        }
        delete game_field;
    }

    int dice(){
       return rand()%6+1;
    }

    void play(){

    }
};

int main()
{
    srand(time(NULL));

    Game test(4,2);
    for(int i = 0; i < test.player_num; i++){
        cout << test.player_list[i]->get_name() << " " << test.player_list[i]->get_id() << " " << test.player_list[i]->get_start() << " " << test.player_list[i]->get_finish()<< endl;
        for(int j = 0; j < 4; j++){
            cout << test.player_list[i]->piece_list[j]->get_piece_id() <<
            " " << test.player_list[i]->piece_list[j]->get_player_id() <<
            " " << test.player_list[i]->piece_list[j]->get_moves() << endl;
        }
        cout << endl;
    }
    for(int i = 0; i < 100; i++){
        cout << test.dice() << " ";
    }

    return 0;
}
