class Stove {                                      // Creates a Stove class

private:
    int temperature = 0;                           // Private variable; cannot be accessed directly

public:

    int getTemperature() {                         // Getter function
        return temperature;                        // Returns current temperature
    }

    void setTemperature(int temperature) {         // Setter function
        if(temperature < 0) {                      // If temperature is below 0
            this->temperature = 0;                 // Set temperature to minimum 0
        }
        else if(temperature >= 10) {               // If temperature is 10 or more
            this->temperature = 10;                // Set temperature to maximum 10
        }
        else {                                     // If temperature is between 0 and 9
            this->temperature = temperature;       // Set the given temperature
        }
    }
};

int main() {                                       // Program starts here

    Stove stove;                                   // Creates a Stove object

    stove.setTemperature(5);                       // Sets temperature to 5

    std::cout << "The temperature setting is: "    // Prints message
              << stove.getTemperature();           // Gets and prints temperature

    return 0;                                      // Ends program
}

/*#include <iostream>                              // Input/output library

class Stove {                                    // Creates Stove class

private:
    int temperature = 0;                         // Private data: cannot access directly

public:

    void setTemperature(int temperature) {       // SETTER: changes the value
        this->temperature = temperature;         // Stores new temperature
    }

    int getTemperature() {                       // GETTER: reads the value
        return temperature;                      // Returns temperature
    }
};

int main() {

    Stove stove;                                 // Creates Stove object

    stove.setTemperature(5);                     // SETTER → sets temperature to 5

    std::cout << stove.getTemperature();         // GETTER → gets/prints temperature

    return 0;
}*/