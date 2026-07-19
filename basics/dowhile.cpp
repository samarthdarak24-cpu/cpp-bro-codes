#include <iostream>
#include <string>

int main() {
    // do while loop
    int number;

    // while(number < 0){
    //     std::cout << "Enter a positive number: ";
    //     std::cin >> number;
    // default 0 if not aasssign no in int num}

    do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The number is " << number;

    return 0;
}
 /*int number;

std :: cout << "Enter a positive #: ";
std :: cin >> number;

while(number < 0){
std :: cout << "Enter a positive #: ";
std: :cin >> number;*/