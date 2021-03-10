//#include "Board.hpp"      
//#include "piece.hpp" 
#include <iostream>

using namespace std;

void DisplayIntro();
void DisplayInstructions();
void ToLowerCase(string *str);
bool ValidateInput(string input_1, string input_2);
Position ConvertChessNotation(string move);
Board cells;


int main(int argc, char** argv) {
string input_1, input_2;
Color TurnnColor = White;
bool moveSucceed = false;
Position moveFrom;
Position moveTo;

DisplayIntro();


while (input_1 != "quit") {
cout << string(4, '\n');
 board.Draw();

do {
if (TurnColor == White) {
                cout << endl << "It's White's turn" << endl;
            } else {
                cout << endl << "It's Blacks's turn" << endl;
            }

do {
cout << "Enter where to move the piece from: ";
cin >> input_1; 
ToLowerCase(&input1);

if (input_1 == "quit") {
return 0;
}
else if (input_1 == "help") {
DisplayInstructions();
} else {
cout << "Enter where to move the piece to: ";
 cin >> input_2;
ToLowerCase(&input_2);
}
}
while (input_1 == "help" || !ValidateInput(input_1, input_2));
moveFrom = ConvertChessNotation(input_1);
moveTo = ConvertChessNotation(input_2);

if (board.GetPiece(moveFrom)->GetColor() != TurnColor) {
cout << "Move Invalid: Wrong color pawn selected" << endl;
moveSucceed = false;
}
else {
moveSucceed = board.MovePiece(moveFrom, moveTo);
if (moveSucceed == false) {
cout << "Move Invalid" << endl;
} else {
cout << "Move Completed" << endl;
}
}
}
while (moveSucceed == false);
if (TurnColor == White) {
TurnColor = Black;
}
else if (TurnColor == Black) {
TurnColor = White;
}
}
return (EXIT_SUCCESS);
}


void DisplayIntro() {
cout << "\n\n\t\t\tPress enter to start game" << endl;
cin.ignore();
}
void DisplayInstructions() {

    cout << "\nInstructions for the game:" << endl
            << "To move the pieces, use standard algebriac notation." << endl
            << "The board is labeled with algebriac notation." << endl
            << "It consists of a letter of the column, followed by a number of the row." << endl
            << "Pieces are designated by w(white) or b(black) for color, followed by the piece's first charector. for example Q is for Queen" << endl
            << "The instruction will be displayed by quiting the program or entiring help." << endl << endl;}

void ToLowerCase(string *str) {
for (size_t i = 0; i < str->length(); ++i) {
(*str)[i] = tolower((*str)[i]);
}
}

bool ValidateInput(string input_1, string input_2) {
if (input_1.size() != 2 || input_2.size() != 2) {
cout << "Incorrect input size. the input should be entred a  letter followed by number" << endl;
    } else {

Position moveFrom = ConvertChessNotation(input_1);
Position moveTo = ConvertChessNotation(input_2);
if (moveFrom.xpos < 0 || moveFrom.xpos > 7 || moveFrom.ypos < 0 || moveFrom.ypos > 7) {
cout << "Source location out of bounds" << endl;
} else if (moveTo.xpos < 0 || moveTo.xpos > 7 || moveTo.ypos < 0 || moveTo.ypos > 7) {
cout << "Destination location out of bounds" << endl;
} else {
return true;
}
} return false; 
}
Position ConvertChessNotation(string moveInputStr) {
Position movePosition;
 movePosition.xpos = (int) moveInputStr[0] - 97;
movePosition.ypos = atoi(&moveInputStr[1]) - 1;
return movePosition;
}
