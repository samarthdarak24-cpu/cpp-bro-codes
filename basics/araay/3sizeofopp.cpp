#include <iostream>
#include <string>

int main()
{
    // sizeof() = returns the size in bytes
    // of a variable or data type

    std::string name = "Bro";
    double gpa = 2.5;

    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(gpa) << " bytes\n";

    return 0;
}

/*#include <iostream>
#include <string>

int main()
{
    // string = stores text
    std::string name = "Bro Code";

    // double = stores decimal numbers
    double gpa = 2.5;

    // char = stores one character
    char grade = 'F';

    // bool = stores true or false
    bool student = true;

    // char array = stores multiple characters
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    // string array = stores multiple strings
    std::string students[] =
    {
        "Spongebob",
        "Patrick",
        "Squidward",
        "Sandy"
    };

    // sizeof(students) = total size of array in bytes
    // sizeof(std::string) = size of one string
    // Division gives the number of elements
    std::cout << sizeof(students) / sizeof(std::string)
              << " elements\n";

    return 0;
}4 elements std::string students[] =
{
    "Spongebob",  // 1
    "Patrick",   // 2
    "Squidward", // 3
    "Sandy"      // 4
};*/