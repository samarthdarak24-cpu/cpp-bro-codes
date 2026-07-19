#include <iostream>
#include <string>

int main()
{
    // Array of strings
    std::string students[] =
    {
        "Spongebob",
        "Patrick",
        "Squidward",
        "Sandy"
    };

    // Loop through every array element
    for(int i = 0;
        i < sizeof(students) / sizeof(std::string);
        i++)
    {
        // Print current student
        std::cout << students[i] << '\n';
    }

    return 0;
}
//Spongebob
Patrick
Squidward
Sandy