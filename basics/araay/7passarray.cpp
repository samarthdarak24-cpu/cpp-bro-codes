#include <iostream>

// Function declaration
double getTotal(double prices[], int size);

int main()
{
    // Array of prices
    double prices[] = {49.99, 15.05, 75, 9.99};

    // Calculate number of elements in the array
    int size = sizeof(prices) / sizeof(prices[0]);

    // Send array and size to getTotal()
    double total = getTotal(prices, size);

    // Print total
    std::cout << "$" << total;

    return 0;
}


// Function definition
double getTotal(double prices[], int size)
{
    double total = 0;

    // Add every price to total
    for(int i = 0; i < size; i++)
    {
        total += prices[i];
    }

    // Return final total
    return total;
}