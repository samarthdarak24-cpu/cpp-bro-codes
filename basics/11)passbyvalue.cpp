void swap(std::string &x, std::string &y); // Function declaration: passes strings by reference

int main() {                               // Program starts here

    std::string x = "Kool-Aid";            // Creates x
    std::string y = "Water";               // Creates y

    swap(x, y);                            // Swaps the values of x and y

    std::cout << "X: " << x << '\n';       // Prints x
    std::cout << "Y: " << y << '\n';       // Prints y

    return 0;                              // Ends program
}

void swap(std::string &x, std::string &y) { // & = pass by reference; modifies original variables

    std::string temp;                       // Temporary variable

    temp = x;                               // Stores x in temp
    x = y;                                  // Copies y into x
    y = temp;                               // Copies original x into y
}

/*Pass by Value vs Pass by Reference

1. Pass by Value — a copy is sent to the function.

void swap(std::string x, std::string y) { // Copies of x and y are passed
    std::string temp = x;                 // Stores x in temp
    x = y;                                // Swaps only the copies
    y = temp;                             // Original variables do not change
}
swap(x, y); // x and y outside the function remain unchanged

2. Pass by Reference — the original variables are sent to the function.

void swap(std::string &x, std::string &y) { // References original x and y
    std::string temp = x;                  // Stores original x in temp
    x = y;                                 // Changes original x
    y = temp;                              // Changes original y
}
swap(x, y); // Original x and y are changed
Simple difference:
Pass by Value	Pass by Reference
Sends a copy	Sends original variable
Original value doesn't change	Original value changes
Uses more memory	More efficient
string x	string &x*/