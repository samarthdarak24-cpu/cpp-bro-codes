#include <iostream>                                      // Includes input/output library

class Pizza {                                            // Creates a Pizza class

public:                                                  // Members are accessible outside the class

    std::string topping1;                                // Stores first topping
    std::string topping2;                                // Stores second topping

    Pizza() {                                             // Default constructor; no arguments
    }

    Pizza(std::string topping1) {                        // Constructor with one argument
        this->topping1 = topping1;                       // Sets first topping
    }

    Pizza(std::string topping1, std::string topping2) {   // Constructor with two arguments
        this->topping1 = topping1;                       // Sets first topping
        this->topping2 = topping2;                       // Sets second topping
    }
};

int main() {                                             // Program starts here

    Pizza pizza1("pepperoni");                           // Calls 1-parameter constructor

    Pizza pizza2("mushrooms", "peppers");                // Calls 2-parameter constructor

    Pizza pizza3;                                        // Calls default constructor

    return 0;                                            // Ends program
}