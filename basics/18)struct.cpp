#include <iostream>                              // Includes input/output library

struct student{                                  // Creates a custom data type called student

    std::string name;                             // Stores student's name
    double gpa;                                   // Stores student's GPA
    bool enrolled = true;                         // Stores enrollment status; default is true
};

int main() {                                     // Program starts here

    student student1;                             // Creates first student object
    student1.name = "Spongebob";                  // Assigns name
    student1.gpa = 3.2;                           // Assigns GPA

    student student2;                             // Creates second student object
    student2.name = "Patrick";                    // Assigns name
    student2.gpa = 2.1;                           // Assigns GPA

    student student3;                             // Creates third student object
    student3.name = "Squidward";                  // Assigns name
    student3.gpa = 1.5;                           // Assigns GPA

    std::cout << student1.name << '\n';           // Prints student1's name
    std::cout << student1.gpa << '\n';            // Prints student1's GPA
    std::cout << student1.enrolled << '\n';       // Prints enrollment status

    std::cout << student2.name << '\n';           // Prints student2's name
    std::cout << student2.gpa << '\n';            // Prints student2's GPA
    std::cout << student2.enrolled << '\n';       // Prints enrollment status

    std::cout << student3.name << '\n';           // Prints student3's name
    std::cout << student3.gpa << '\n';            // Prints student3's GPA
    std::cout << student3.enrolled << '\n';       // Prints enrollment status

    return 0;                                    // Ends program
}

/*#include <iostream>                                  // Includes input/output library

struct Car{                                          // Creates a custom Car data type
    std::string model;                               // Stores car model
    int year;                                        // Stores manufacturing year
    std::string color;                               // Stores car color
};

void printCar(Car &car);                             // Function declaration to print car details
void paintCar(Car &car, std::string color);          // Function declaration to change car color

int main() {                                         // Program starts here

    Car car1;                                        // Creates first Car object
    Car car2;                                        // Creates second Car object

    car1.model = "Mustang";                          // Sets car1 model
    car1.year = 2023;                                // Sets car1 year
    car1.color = "red";                              // Sets car1 color

    car2.model = "Corvette";                         // Sets car2 model
    car2.year = 2024;                                // Sets car2 year
    car2.color = "blue";                             // Sets car2 color

    paintCar(car1, "silver");                        // Changes car1 color to silver
    paintCar(car2, "gold");                          // Changes car2 color to gold

    printCar(car1);                                  // Prints car1 details
    printCar(car2);                                  // Prints car2 details

    return 0;                                        // Ends program
}

void printCar(Car &car) {                            // Receives original Car object by reference

    std::cout << car.model << '\n';                  // Prints model
    std::cout << car.year << '\n';                   // Prints year
    std::cout << car.color << '\n';                  // Prints color
}

void paintCar(Car &car, std::string color) {         // Receives original Car and new color

    car.color = color;                               // Changes the original car's color
}*/