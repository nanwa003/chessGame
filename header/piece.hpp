#ifndef _PIECE_HPP_
#define _PIECE_HPP_

#include <string>
class Board;

enum Color {
    Black,
    White
};

typedef struct Coordinates {
    int xpos;
    int ypos;
} Position;

class Piece
{
        protected:
        std::string val;
	Position pos;
	Color color;
	
        public:
	void setPos(Position);
	void setColor(Color );
	Position getPos();
	Color getColor();
	std::string getVal();
	
        void Draw();
        virtual bool validateMove(Position) = 0;
	
	Piece();
	~Piece() = default;
};

#endif // _PIECE_HPP_
