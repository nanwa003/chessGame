

 
 > Authors: 
 >* Nam (Alexander) Tran (https://github.com/alexander7862)
 >* Andres Arevalo (https://github.com/aa2510759)
 >* Nardin Anwar (https://github.com/nanwa003)
 


## Project Description

 ## Why is it important or interesting to you?
 > * We decided to create chess game because it is complex and would be fun to implement as a project. Since there are a lot of computer chess games available, it would be interesting to learn how to write a chess game from the ground up and gain some understanding about how computer chess works.
 ## What languages/tools/technologies do you plan to use? 
 >   * We will use C++, Vim, Git/Github, and PuTTy
 ## What will be the input/output of your project? 
 > * The input will be keyboard control based on user input. The ouput will be a char grid representation of a chess board.
## What are the two design patterns you will be using? For each design pattern you must explain in 4-5 sentences:
>* Composite Design Pattern:
We chose the composite design pattern for our project because it would be straightforward implementation for a chess game. For our project, we could implement the piece as a Base class, since the pieces all have the same functionality. This design pattern would make things easier in proviiding the same functionality for pieces in terms movement and capturing other pieces. For our project, we can have the player (white and black pieces) be the composite, and the pieces themselves be the leaves.
 > * Strategy Design Pattern:
The strategy design pattern would be useful for changing a piece's behavior depending on the context of the game. For example, a pawn moving forward two spots on the first move but after that can only move one spot. Another example is when the pawn gets promoted to queen, we would change its functionality so that the movement is the same as a queen. Because there are many different contexts in chess where pieces can move differently, it would be helpful to implement the strategy design pattern in our project. 


#### OMT Diagram

![](Final%20Proj%20OMT%20Revised.jpg)

#### Diagram Description
-The OMT Diagram depicts a Composite Design Pattern and a Strategy Design pattern. The Composite Pattern is demonstrated in the piece class being a leaf of both the Square and the Board class, The strategy pattern is also implemented using Piece as the interface, and all the children that inherit from Piece have different movements depending on what type of piece they are and what context they are in. For example, the pawn can move two squares on the first move, but only one square on subsequent moves.

Square class is a composite class that sets the piece and returns the piece type at that location, so getPiece returns the piece, setPiece sets the piece at a particular location on the board, and Clear() clears a given location on the board and sets it to null.

The Board class simply creates an object to represent a chessboard and can be implemented to make a board of any size. It has 3 private members: Square cells, which is a 2D array of Squares for the board setup, initPieces() which initializes the board and the starting positions of the pieces, and isWithinBoard, which takes a Position value and determines if it is within the boundaries of the board.
Board and ~Board are the default constructors and destructors
void Draw() draws the chessboard with the labels for the rows and columns
bool movePiece(pos1, pos2) moves the piece from pos1 to pos2, returns true if move was completed, else returns false
Piece getPiece(pieceatPos) returns the piece at the position entered, and if it’s empty it returns null



The Piece class includes a struct Position and Color as well as a string type as protected members, since all derived classes will need to access them. 
Piece() and ~Piece() are constructors and destructors
void Draw() outputs the piece type
Color getColor returns the color type whether white or black
Virtual bool validMove checks whether the move made is valid and will be implemented for the different classes.




![](chess%20%_%20%catching%20%Error.jpg)
