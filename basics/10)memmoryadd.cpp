#include <iostream>              // Includes input/output library

int main() {                      // Program execution starts here

    std::string name = "Bro";     // Creates a string variable
    int age = 21;                 // Creates an integer variable
    bool student = true;          // Creates a boolean variable

    std::cout << &name << '\n';   // Prints the memory address of name
    std::cout << &age << '\n';    // Prints the memory address of age
    std::cout << &student << '\n';// Prints the memory address of student

    return 0;                     // Successfully ends the program
}