#include <iostream>                         // Includes input/output library

int main() {                                // Program starts here

    int *pNum = NULL;                       // Creates pointer with no address

    pNum = new int;                         // Allocates memory for an integer

    *pNum = 21;                             // Stores 21 in the allocated memory

    std::cout << "address: " << pNum << '\n';  // Prints memory address
    std::cout << "value: " << *pNum << '\n';   // Prints value stored at address

    delete pNum;                            // Frees the allocated memory

    return 0;                               // Ends program successfully
}
/*#include <iostream>                                      // Input/output library

int main() {                                             // Program starts here

    char *pGrades = NULL;                                // Pointer to store address of char array

    int size;                                            // Stores number of grades

    std::cout << "How many grades to enter in?: ";       // Asks array size
    std::cin >> size;                                    // Gets size from user

    pGrades = new char[size];                            // Dynamically creates char array

    for(int i = 0; i < size; i++){                       // Loops through every grade

        std::cout << "Enter grade #" << i + 1 << ": ";   // Asks for grade
        std::cin >> pGrades[i];                          // Stores grade in array
    }

    for(int i = 0; i < size; i++){                       // Loops through grades again

        std::cout << pGrades[i] << " ";                  // Prints each grade
    }

    delete[] pGrades;                                    // Deletes the entire dynamic array

    return 0;                                            // Ends program
}*/