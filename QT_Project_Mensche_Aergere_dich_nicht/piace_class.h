#ifndef PIACE_H_CLASS_H
#define PIACE_H_CLASS_H

#include <iostream>
#include <string>
#include <cstdlib>

class Piece
{
private:
    int piece_id; // 1-4 identifies the pieces
    int player_id; // 1-4 depending which player the piece belongs to
    int moves; // 0-39, number of moves taken so far, when = 55, the piece is on finish position

public:
    Piece(int input_piece_id, int input_player_id);
    int get_piece_id();
    int get_player_id();
    int get_moves();
};

#endif // PIACE_H
//this is to ensure the correct commit from ubuntu
