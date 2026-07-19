#include <iostream>
#include <string>

int main()
{
    // Array can store maximum 5 foods
    std::string foods[5];

    // Find array size
    int size = sizeof(foods) / sizeof(foods[0]);

    std::string temp; // Temporary input variable

    // Get food from user
    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter food you like or 'q' to quit #"
                  << i + 1 << ": ";

        std::getline(std::cin, temp);

        // Stop if user enters q
        if(temp == "q")
        {
            break;
        }
        else
        {
            // Store input in array
            foods[i] = temp;
        }
    }

    std::cout << "You like the following food:\n";

    // Print foods until an empty element is found
    for(int i = 0; !foods[i].empty(); i++)
    {
        std::cout << foods[i] << '\n';
    }

    return 0;
}