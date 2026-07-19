#include <iostream>
#include <string>

int main()
{
    // 2D array:
    // 3 rows and 3 columns
    std::string cars[][3] =
    {
        {"Mustang", "Escape", "F-150"},       // Row 0
        {"Corvette", "Equinox", "Silverado"}, // Row 1
        {"Challenger", "Durango", "Ram 1500"} // Row 2
    };

    // Find number of rows
    int rows = sizeof(cars) / sizeof(cars[0]);

    // Find number of columns
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    // Outer loop: goes through rows
    for(int i = 0; i < rows; i++)
    {
        // Inner loop: goes through columns
        for(int j = 0; j < columns; j++)
        {
            // Print current car
            std::cout << cars[i][j] << " ";
        }

        // Move to next line after each row
        std::cout << '\n';
    }

    return 0;
}