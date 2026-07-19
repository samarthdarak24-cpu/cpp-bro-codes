#include <iostream>                                      // Input/output library

void printInfo(const std::string &name, const int &age); // const reference parameters

int main() {                                              // Program starts here

    std::string name = "Bro";                             // Creates name
    int age = 21;                                         // Creates age

    printInfo(name, age);                                 // Sends name and age to function

    return 0;                                             // Ends program
}

void printInfo(const std::string &name, const int &age) { // const = cannot modify original values

    // name = "Sam";                                      // ERROR: name cannot be changed
    // age = 0;                                           // ERROR: age cannot be changed

    std::cout << name << '\n';                            // Reads and prints name
    std::cout << age << '\n';                             // Reads and prints age
}

/*Why use const?
const std::string &name
& → no copy is created; uses the original variable
const → function cannot modify the original variable
const int &age
& → passes by reference
const → prevents changing age

Simple meaning:

const = "You can look at it, but you cannot change it."*/