#include <iostream>                         // Includes input/output library

void walk(int steps);                       // Function declaration

int main() {                                // Program starts here

    walk(100);                              // Calls walk() with 100 steps

    return 0;                               // Ends program
}

void walk(int steps) {                      // Function receives number of steps

    if(steps > 0) {                         // Base condition: stops when steps reaches 0

        std::cout << "You take a step!\n";  // Prints message

        walk(steps - 1);                    // Recursion: calls itself with 1 less step
    }
}
/*#include <iostream>                         // Includes input/output library

int factorial(int num);                     // Function declaration

int main() {                                // Program starts here

    std::cout << factorial(10);              // Calculates and prints 10!

    return 0;                               // Ends program
}

int factorial(int num) {                    // Function calculates factorial

    int result = 1;                         // Stores the result

    for(int i = 1; i <= num; i++) {         // Loops from 1 to num

        result = result * i;                // Multiplies result by current i
    }

    return result;                          // Returns the final factorial
}*/

/*#include <iostream>                         // Includes input/output library

int factorial(int num);                     // Function declaration

int main() {                                // Program starts here

    std::cout << factorial(10);              // Calls factorial(10) and prints result

    return 0;                               // Ends program
}

int factorial(int num) {                    // Recursive factorial function

    if(num > 1) {                           // Checks if num is greater than 1

        return num * factorial(num - 1);    // Function calls itself with num - 1

    }
    else {                                  // Runs when num becomes 1

        return 1;                           // Base case: stops recursion
    }
}*/