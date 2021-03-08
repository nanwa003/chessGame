#ifndef _PIECE_HPP_
#define _PIECE_HPP_

#include <string>
class Board;

enum Color {
    Black,
    White
};

struct pos{
        int x;
        int y;
 //       bool occupied;
};

class Piece
{

        protected:
        std::string val;
	pos myPos;
//	bool captured;
	
        public:
	void setPos(int x, int y);
  //    bool capture(pos p);
	void setColor(Color c);
	
	pos getPos();
	Color getColor();
        virtual void setVal() = 0;
        virtual bool validateMove() = 0;
	std::string getVal();
	
	
	Piece(bool color);
	Piece(int x, int y);
	~Piece() = default;
};

#endif // _PIECE_HPP_
