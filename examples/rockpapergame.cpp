#include <iostream>
#include <ctime>

// Function declarations
char getUserChoice();                  // gets player's choice
char getComputerChoice();              // generates computer choice
void showChoice(char choice);          // displays choice
void chooseWinner(char player, char computer); // decides winner


int main()
{
    char player;
    char computer;

    // Get player's choice
    player = getUserChoice();

    std::cout << "Your choice: ";
    showChoice(player);

    // Get computer's random choice
    computer = getComputerChoice();

    std::cout << "Computer's choice: ";
    showChoice(computer);

    // Decide winner
    chooseWinner(player, computer);

    return 0;
}


// Gets valid choice from player
char getUserChoice()
{
    char player;

    std::cout << "Rock-Paper-Scissors Game!\n";

    do
    {
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";

        std::cin >> player;

    } while(player != 'r' &&
            player != 'p' &&
            player != 's'); // repeat if invalid

    return player; // send choice back
}


// Generates random computer choice
char getComputerChoice()
{
    srand(time(0)); // seed random number

    int num = rand() % 3 + 1; // random number: 1 to 3

    switch(num)
    {
        case 1: return 'r'; // rock
        case 2: return 'p'; // paper
        case 3: return 's'; // scissors
    }

    return 0;
}


// Converts character into readable text
void showChoice(char choice)
{
    switch(choice)
    {
        case 'r':
            std::cout << "Rock\n";
            break;

        case 'p':
            std::cout << "Paper\n";
            break;

        case 's':
            std::cout << "Scissors\n";
            break;
    }
}


// Decides who wins
void chooseWinner(char player, char computer)
{
    switch(player)
    {
        case 'r':
            if(computer == 'r')
                std::cout << "It's a tie!\n";

            else if(computer == 'p')
                std::cout << "You lose!\n";

            else
                std::cout << "You win!\n";

            break;


        case 'p':
            if(computer == 'r')
                std::cout << "You win!\n";

            else if(computer == 'p')
                std::cout << "It's a tie!\n";

            else
                std::cout << "You lose!\n";

            break;


        case 's':
            if(computer == 'r')
                std::cout << "You lose!\n";

            else if(computer == 'p')
                std::cout << "You win!\n";

            else
                std::cout << "It's a tie!\n";

            break;
    }
}