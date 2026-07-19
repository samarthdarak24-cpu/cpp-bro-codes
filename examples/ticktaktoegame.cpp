#include<iostream>                                      // Input/output library
#include <ctime>                                        // Provides time() for random numbers

void drawBoard(char *spaces);                           // Displays the game board
void playerMove(char *spaces, char player);             // Handles player's move
void computerMove(char *spaces, char computer);         // Handles computer's move
bool checkWinner(char *spaces, char player, char computer); // Checks for winner
bool checkTie(char *spaces);                            // Checks for a tie

int main()                                             // Program starts here
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}; // 9 board positions
    char player = 'X';                                  // Player uses X
    char computer = 'O';                                // Computer uses O
    bool running = true;                                // Controls the game loop

    drawBoard(spaces);                                  // Displays empty board

    while(running){                                     // Repeats while game is running

        playerMove(spaces, player);                     // Gets player's move
        drawBoard(spaces);                              // Displays updated board

        if(checkWinner(spaces, player, computer)){      // Checks if player won
            running = false;                            // Stops game
            break;                                      // Exits loop
        }
        else if(checkTie(spaces)){                      // Checks if board is full
            running = false;                            // Stops game
            break;                                      // Exits loop
        }

        computerMove(spaces, computer);                 // Gets computer's move
        drawBoard(spaces);                              // Displays updated board

        if(checkWinner(spaces, player, computer)){      // Checks if computer won
            running = false;                            // Stops game
            break;                                      // Exits loop
        }
        else if(checkTie(spaces)){                      // Checks if board is full
            running = false;                            // Stops game
            break;                                      // Exits loop
        }
    }

    std::cout << "Thanks for playing!\n";               // Goodbye message

    return 0;                                           // Ends program
}

void drawBoard(char *spaces){                           // Receives board array by pointer

    std::cout << '\n';                                  // Prints blank line
    std::cout << "     |     |     " << '\n';            // Board line
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n'; // Row 1
    std::cout << "_____|_____|_____" << '\n';             // Horizontal line
    std::cout << "     |     |     " << '\n';            // Board line
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n'; // Row 2
    std::cout << "_____|_____|_____" << '\n';             // Horizontal line
    std::cout << "     |     |     " << '\n';            // Board line
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n'; // Row 3
    std::cout << "     |     |     " << '\n';            // Board line
    std::cout << '\n';                                  // Prints blank line
}

void playerMove(char *spaces, char player){             // Gets player's position

    int number;                                         // Stores position number

    do{                                                 // Repeats until valid move

        std::cout << "Enter a spot to place a marker (1-9): "; // Asks for position
        std::cin >> number;                             // Gets user input

        number--;                                       // Converts 1-9 into array index 0-8

        if(spaces[number] == ' '){                      // Checks if position is empty
            spaces[number] = player;                    // Places X on board
            break;                                      // Exits loop
        }

    }while(!number > 0 || !number < 8);                 // ⚠️ This condition is incorrect
}

void computerMove(char *spaces, char computer){         // Handles computer move

    int number;                                         // Stores random position

    srand(time(0));                                     // Seeds random number generator

    while(true){                                        // Keeps trying until empty position found

        number = rand() % 9;                             // Generates random number from 0-8

        if(spaces[number] == ' '){                       // Checks if position is empty
            spaces[number] = computer;                   // Places O on board
            break;                                       // Exits loop
        }
    }
}

bool checkWinner(char *spaces, char player, char computer){ // Checks all winning combinations

    if((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){ // Top row
        spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n"; // Displays result
    }

    else if((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){ // Middle row
        spaces[3] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n"; // Displays result
    }

    else if((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){ // Bottom row
        spaces[6] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n"; // Displays result
    }

    else if((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){ // Left column
        spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n"; // Displays result
    }

    else if((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){ // Middle column
        spaces[1] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n"; // Displays result
    }

    else if((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){ // Right column
        spaces[2] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n"; // Displays result
    }

    else if((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){ // Main diagonal
        spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n"; // Displays result
    }

    else if((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])){ // Other diagonal
        spaces[2] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n"; // Displays result
    }

    else{
        return false;                                   // No winner found
    }

    return true;                                        // Winner found
}

bool checkTie(char *spaces){                            // Checks whether board is full

    for(int i = 0; i < 9; i++){                         // Loops through all 9 positions

        if(spaces[i] == ' '){                            // If any position is empty
            return false;                               // Game is not a tie
        }
    }

    std::cout << "IT'S A TIE!\n";                       // All positions are filled
    return true;                                        // Tie found
}