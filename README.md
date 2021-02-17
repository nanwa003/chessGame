

 
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

![](Final%20Proj%20OMT.jpg)

#### Diagram Description
-The OMT Diagram depicts a Composite Design Pattern and a Strategy Design pattern. The Composite Pattern is implemented in the classes that inherit from the piece class since they redefine the functions of the Piece class. Also, the Game class is composite since it has the Player and Board class as leafs The strategy pattern is also implemented using Piece as the interface, and all the children that inherit from Piece have different movements depending on what type of piece they are and what context they are in. For instance, the pawn can move as any other piece except the king when it is at the other end of the chessboard, so it has another function that can change its movement capabilities. The pieces themselves have different values set with the member function setVal(). 

The Game class takes into account things like time, checkmate and starting the game.
Void PlayGame() is a member function that triggers a new game. 
The intTimer() keeps track of how much time has passed, and Int numPieces() keeps track of how many pieces are on the board
Bool isCheckmate() checks to see if checkmate has been met
Void announce_winner() announces the winner via text output

The Board class simply creates an object to represent a chessboard and can be implemented to make a board of any size.
Void setRows() sets the row value
Void setCol() sets the column value
Int getRows() gets the row value
Int getCol() gets the column value
Void create() creates a new board object

The Player class takes into account the score, color and name. It also keeps track of pieces in play as well as pieces captured.
Void setName() sets the name of the player
Void setColor() sets the color of the player
Int piecesInPlay() determines the amount of pieces in play
Int PiecesCaptured() determines the amount of pieces captured

The Piece class will describe the team color, values of the pieces and move function.
Bool color_player will describe the color of the pieces for each player.
Virtual movePieces(): this function will allow the player to move the pieces as chess game rule and the player command. 




