#include <iostream>                                      // Includes input/output library

enum Day {                                                 // Creates a custom enum data type
    sunday = 0,                                             // sunday has value 0
    monday = 1,                                             // monday has value 1
    tuesday = 2,                                            // tuesday has value 2
    wednesday = 3,                                          // wednesday has value 3
    thursday = 4,                                           // thursday has value 4
    friday = 5,                                             // friday has value 5
    saturday = 6                                            // saturday has value 6
};

int main() {                                               // Program starts here

    Day today = friday;                                     // Stores friday in today

    switch(today) {                                         // Checks the value of today

        case sunday:                                       // If today is sunday
            std::cout << "It is Sunday!\n";                // Prints Sunday
            break;                                         // Exits switch

        case monday:                                       // If today is monday
            std::cout << "It is Monday!\n";                // Prints Monday
            break;                                         // Exits switch

        case tuesday:                                      // If today is tuesday
            std::cout << "It is Tuesday!\n";               // Prints Tuesday
            break;                                         // Exits switch

        case wednesday:                                    // If today is wednesday
            std::cout << "It is Wednesday!\n";             // Prints Wednesday
            break;                                         // Exits switch

        case thursday:                                     // If today is thursday
            std::cout << "It is Thursday!\n";              // Prints Thursday
            break;                                         // Exits switch

        case friday:                                       // If today is friday
            std::cout << "It is Friday!\n";                // Prints Friday
            break;                                         // Exits switch

        case saturday:                                     // If today is saturday
            std::cout << "It is Saturday!\n";              // Prints Saturday
            break;                                         // Exits switch
    }

    return 0;                                               // Ends program
}