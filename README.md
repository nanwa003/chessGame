 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# Chess Game

 
 > Authors: \[Nam (Alexander) Tran](https://github.com/alexander7862)\
 \[Andres Arevalo](https://github.com/aa2510759)\
 \[Nardin Anwar](https://github.com/)\
 

 > ## Expectations
 > * Incorporate **at least two** distinct design patterns. You need to include at least *one* design pattern that we will teach this session:
 >   * Composite, Strategy, Abstract Factory, Visitor, or Decorator
 > * All design patterns need to be linked together (it can't be two distinct projects)
 > * Your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group.


## Project Description

 ## Why is it important or interesting to you?
 > * We decided to create chess game because it is complex and would be fun to implement as a project
 ## What languages/tools/technologies do you plan to use? 
 >   * We will use C++, Vim, Git/Github, and PuTTy
 ## What will be the input/output of your project? 
##What are the two design patterns you will be using? For each design pattern you must explain in 4-5 sentences:
>* Design Pattern 1: Composite
We chose the composite design pattern for our project because it would be straightforward implementation. For our project, we could implement the piece as a Base class, since the pieces all have the same functionality. This design pattern would make things easier in the case of promotion for a pawn. We can use this pattern to determine when a piece is captured.
 > * Pattern 2: Strategy
The strategy design pattern would be useful for changing a piece's behavior depending on the context of the game. For example, a pawn moving forward two spots on the first move but after that can only move one spot. Another example is when the pawn gets promoted to queen, we would change its functionality so that the movement is the same as a queen. These problems can be addressed with the strategy design pattern.   


