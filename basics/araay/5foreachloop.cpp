#include <iostream>
#include <string>

int main()
{
    // foreach loop = easy way to traverse
    // every element in an array

    std::string students[] =
    {
        "Spongebob",
        "Patrick",
        "Squidward",
        "Sandy"
    };

    // student = each element of students
    for(std::string student : students)
    {
        std::cout << student << '\n';
    }

    return 0;
}
/*#include <iostream>

int main()
{
    // foreach loop = easy way to traverse
    // every element in an iterable data set

    // Array of integers
    int grades[] = {65, 72, 81, 93};

    // grade stores one value at a time
    for(int grade : grades)
    {
        std::cout << grade << '\n';
    }

    return 0;
}