#include <iostream>                          // Includes input/output library

template <typename T, typename U>            // Creates a generic function for any 2 data types
auto max(T x, U y) {                          // T and U can be different types
    return (x > y) ? x : y;                   // Returns the larger value
}

int main() {                                 // Program starts here

    std::cout << max(1, 2.1) << '\n';         // T=int, U=double → returns 2.1

    return 0;                                // Ends program
}

/*#include <iostream>                              // Includes input/output library

int max(int x, int y) {                           // max() function for integers
    return (x > y) ? x : y;                      // Returns the larger integer
}

double max(double x, double y) {                 // max() function for double values
    return (x > y) ? x : y;                      // Returns the larger double
}

char max(char x, char y) {                       // max() function for characters
    return (x > y) ? x : y;                      // Returns the character with larger ASCII value
}

int main() {                                     // Program starts here

    std::cout << max('1', '2') << '\n';          // Calls char version and prints '2'

    return 0;                                    // Ends program
}*/