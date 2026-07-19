#include <iostream>                                      // Input/output functions

int getDigit(const int number);                          // Function declaration
int sumOddDigits(const std::string cardNumber);          // Function declaration
int sumEvenDigits(const std::string cardNumber);         // Function declaration

int main()                                               // Program starts here
{
    std::string cardNumber;                              // Stores card number as a string
    int result = 0;                                      // Stores the final sum

    std::cout << "Enter a credit card #: ";              // Asks user for card number
    std::cin >> cardNumber;                              // Takes card number input

    result = sumEvenDigits(cardNumber) +                // Calculates doubled digits sum
             sumOddDigits(cardNumber);                  // Calculates remaining digits sum

    if(result % 10 == 0){                                // If sum is divisible by 10
        std::cout << cardNumber << " is valid";         // Card number is valid
    }
    else{                                                // Otherwise
        std::cout << cardNumber << " is not valid";     // Card number is invalid
    }

    return 0;                                            // Ends program successfully
}

int getDigit(const int number){                          // Splits a 2-digit number and adds digits

    return number % 10 + (number / 10 % 10);              // Example: 18 → 8 + 1 = 9
}

int sumOddDigits(const std::string cardNumber){          // Adds digits at odd positions

    int sum = 0;                                         // Starts sum at 0

    for(int i = cardNumber.size() - 1;                   // Starts from rightmost digit
        i >= 0;                                          // Continues until first digit
        i -= 2){                                         // Moves 2 positions left

        sum += cardNumber[i] - '0';                      // Converts character to number and adds it
    }

    return sum;                                          // Returns sum of odd-position digits
}

int sumEvenDigits(const std::string cardNumber){         // Adds doubled even-position digits

    int sum = 0;                                         // Starts sum at 0

    for(int i = cardNumber.size() - 2;                   // Starts from second-last digit
        i >= 0;                                          // Continues until first digit
        i -= 2){                                         // Moves 2 positions left

        sum += getDigit(                                 // Adds digits if result has 2 digits
            (cardNumber[i] - '0') * 2                   // Converts character to number and doubles it
        );
    }

    return sum;                                          // Returns sum of even-position digits
}

/*// LUHN ALGORITHM
// Used to check whether a card number is valid

// Example: 6011

// Step 1: Starting from the right, double every second digit
// 6 0 1 1
//     ↑   ↑
//     0   1
// Double: 0 × 2 = 0, 1 × 2 = 2

// Step 2: Add digits from doubled numbers
// 0 + 2 = 2

// Step 3: Add the remaining digits
// 6 + 1 = 7

// Step 4: Add both results
// 2 + 7 = 9

// Step 5: Check if sum is divisible by 10
// 9 % 10 != 0 → INVALID*/