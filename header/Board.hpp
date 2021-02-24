//Board Class header file
#ifndef _BOARD_HPP_
#define _BOARD_HPP_

#include "../src/Piece.cpp"

//class def of square with member function definitions
class Square {
  private:
	 Piece p;
	 int x;
	 int y;
  public: //member functions w/ definitions
	Square(int ex, int why, Piece p)
	{
		this->setPiece(p);
		this->setXpos(ex);
		this->setYpos(why);
	}

	Piece getPiece()
	{
		return p;
	
	}
	void setPiece(Piece piece)
	{ 
	    p = piece;	
	}
	void setXpos(int xOne)
	{
		x = xOne;
	}
	void setYpos(int yOne)
	{
		y = yOne;
	}

	int getXpos()
	{
		return x;
	}
	int getYpos()
	{
		return y;
	}


}

class Board{
   private:
	Square cells[8][8];
 

   public:
	   Board();
	   Square getCells();
	   void setBoard();
}




#endif
