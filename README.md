

 
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


