#ifndef _PIECE_HPP_
#define _PIECE_HPP_

struct pos{
        int x;
        int y;
        bool occupied;
};

class Piece
{

        protected:
        int val;
        bool color;
	pos myPos;

        public:
	void setPos(int x, int y);
        bool capture(pos  p);
        virtual void setVal() = 0;
        virtual void movePiece() = 0;
	int  getVal();
	
	Piece(int x, int y);
	~Piece() = default;
};

#endif // _PIECE_HPP_
