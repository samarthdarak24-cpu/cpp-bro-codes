#include <iostream>
#include <string>

// Function declaration
int searchArray(std::string array[], int size, std::string element);

int main()
{
    // Array of foods
    std::string foods[] = {"pizza", "hamburger", "hotdog"};

    // Find number of elements
    int size = sizeof(foods) / sizeof(foods[0]);

    int index;
    std::string myFood;

    // Ask user what to search for
    std::cout << "Enter element to search for: ";
    std::getline(std::cin, myFood);

    // Search the array
    index = searchArray(foods, size, myFood);

    // Check if element was found
    if(index != -1)
    {
        std::cout << myFood << " is at index " << index;
    }
    else
    {
        std::cout << myFood << " is not in the array";
    }

    return 0;
}


// Searches for an element in the array
int searchArray(std::string array[], int size, std::string element)
{
    // Check every element
    for(int i = 0; i < size; i++)
    {
        // Compare current element with searched element
        if(array[i] == element)
        {
            return i; // Return index if found
        }
    }

    return -1; // -1 means not found
}