#include <iostream>                              // Includes input/output library

class Car {                                      // Creates a class named Car

public:                                          // Members below are accessible outside the class

    std::string make;                            // Stores car company
    std::string model;                           // Stores car model
    int year;                                    // Stores manufacturing year
    std::string color;                           // Stores car color

    void accelerate() {                          // Creates a function/method
        std::cout << "You step on the gas!\n";    // Prints acceleration message
    }

    void brake() {                               // Creates another function/method
        std::cout << "You step on the brakes!\n"; // Prints braking message
    }
};

int main() {                                     // Program starts here

    Car car1;                                    // Creates an object of Car class

    car1.make = "Ford";                          // Sets car company
    car1.model = "Mustang";                      // Sets car model
    car1.year = 2023;                            // Sets car year
    car1.color = "silver";                       // Sets car color

    std::cout << car1.make << '\n';              // Prints make
    std::cout << car1.model << '\n';             // Prints model
    std::cout << car1.year << '\n';              // Prints year
    std::cout << car1.color << '\n';             // Prints color

    car1.accelerate();                           // Calls accelerate() method
    car1.brake();                                // Calls brake() method

    return 0;                                    // Ends program
}