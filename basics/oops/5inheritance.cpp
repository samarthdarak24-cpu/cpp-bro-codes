#include <iostream>                              // Includes input/output library

class Animal {                                   // Parent/Base class

public:
    bool alive = true;                           // Property inherited by child classes

    void eat() {                                 // Function of Animal
        std::cout << "This animal is eating\n";  // Prints eating message
    }
};

class Dog : public Animal {                      // Dog inherits from Animal

public:

    void bark() {                                // Dog's own function
        std::cout << "The dog goes woof!\n";     // Prints barking message
    }
};

class Cat : public Animal {                      // Cat inherits from Animal

public:

    void meow() {                                // Cat's own function
        std::cout << "The cat goes meow!\n";     // Prints meowing message
    }
};

int main() {                                     // Program starts here

    Dog dog;                                     // Creates Dog object
    Cat cat;                                     // Creates Cat object

    std::cout << dog.alive << '\n';              // Dog gets alive from Animal
    dog.eat();                                   // Dog gets eat() from Animal
    dog.bark();                                  // Dog's own function

    return 0;                                    // Ends program
}