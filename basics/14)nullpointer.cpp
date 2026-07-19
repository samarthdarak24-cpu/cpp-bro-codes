#include <iostream>                         // Includes input/output library

int main() {                                // Program starts here

    int* pointer = nullptr;                 // Creates pointer with no address

    int x = 123;                            // Creates integer variable x

    pointer = &x;                           // Stores address of x in pointer

    if(pointer == nullptr) {                // Checks if pointer has no address

        std::cout << "address was not assigned!\n"; // Prints if pointer is empty

    }
    else {                                  // Runs if pointer has an address

        std::cout << "address was assigned!\n";      // Confirms address exists

        std::cout << *pointer;              // * gets the value stored at the address
    }

    return 0;                               // Ends program successfully
}