#include <iostream>                                      // Includes input/output library

class Car {                                              // Creates a Car class

public:                                                  // Members are accessible outside the class

    std::string make;                                    // Stores car company
    std::string model;                                   // Stores car model
    int year;                                            // Stores car year
    std::string color;                                   // Stores car color

    Car(std::string make, std::string model,            // Constructor receives car details
        int year, std::string color) {

        this->make = make;                               // Assigns parameter make to object's make
        this->model = model;                             // Assigns parameter model to object's model
        this->year = year;                               // Assigns parameter year to object's year
        this->color = color;                             // Assigns parameter color to object's color
    }
};

int main() {                                             // Program starts here

    Car car1("Chevy", "Corvette", 2022, "blue");         // Creates car1 and automatically calls constructor

    Car car2("Ford", "Mustang", 2023, "red");            // Creates car2 and automatically calls constructor

    std::cout << car1.make << '\n';                      // Prints car1 make
    std::cout << car1.model << '\n';                     // Prints car1 model
    std::cout << car1.year << '\n';                      // Prints car1 year
    std::cout << car1.color << '\n';                     // Prints car1 color

    return 0;                                            // Ends program
}