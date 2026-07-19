#include <iostream>
#include <string>

int main()
{
    // Array of strings
    std::string cars[] = {"Corvette", "Mustang", "Camry"};

    // Change value at index 0
    cars[0] = "Camaro";

    // Print array values
    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    return 0;
}
/*int main()

double prices[] = {5.00, 7.50, 9.99, 15.00h;

std :: cout << prices[0] << '\n';
std :: cout << prices[1] << '\n';
std :: cout << prices[2] << '\n';
std :: cout << prices[3] << '\n';

return 0;*/