#include <iostream>
#include <iomanip>

// Function declarations
void showBalance(double balance); // displays balance
double deposit();                  // returns deposit amount
double withdraw(double balance);  // returns withdrawal amount

int main()
{
    double balance = 0; // stores money
    int choice = 0;     // stores menu choice

    do
    {
        // Display menu
        std::cout << "\n1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        // Handle user's choice
        switch(choice)
        {
            case 1:
                showBalance(balance);
                break;

            case 2:
                balance += deposit(); // add deposited money
                showBalance(balance);
                break;

            case 3:
                balance -= withdraw(balance); // subtract withdrawn money
                showBalance(balance);
                break;

            case 4:
                std::cout << "Thanks for visiting!\n";
                break;

            default:
                std::cout << "Invalid choice\n";
        }

    } while(choice != 4); // repeat until choice is 4

    return 0;
}

// Displays current balance
void showBalance(double balance)
{
    std::cout << "Balance: $"
              << std::fixed
              << std::setprecision(2)
              << balance << '\n';
}

// Gets deposit amount
double deposit()
{
    double amount;

    std::cout << "Enter deposit: ";
    std::cin >> amount;

    if(amount > 0)
        return amount; // return valid amount

    return 0; // invalid amount
}

// Gets withdrawal amount
double withdraw(double balance)
{
    double amount;

    std::cout << "Enter withdrawal: ";
    std::cin >> amount;

    if(amount > balance)
    {
        std::cout << "Insufficient funds\n";
        return 0;
    }

    if(amount < 0)
    {
        std::cout << "Invalid amount\n";
        return 0;
    }

    return amount; // return valid amount
}