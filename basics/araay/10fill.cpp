#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    // fill() = fills a range of elements
    // with a specified value

    const int SIZE = 99;

    // Array with 99 elements
    std::string foods[SIZE];

    // First 33 elements → pizza
    std::fill(foods,
              foods + (SIZE / 3),
              "pizza");

    // Next 33 elements → hamburger
    std::fill(foods + (SIZE / 3),
              foods + (SIZE / 3) * 2,
              "hamburger");

    // Last 33 elements → hotdog
    std::fill(foods + (SIZE / 3) * 2,
              foods + SIZE,
              "hotdog");

    // Print all elements
    for(std::string food : foods)
    {
        std::cout << food << '\n';
    }

    return 0;
}





/*#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    // fill() = fills a range of elements (begin,end,value)
    // with the same specified value

    const int SIZE = 100;

    // Array with 100 string elements
    std::string foods[SIZE];

    // Fill every element with "pizza"
    std::fill(foods, foods + SIZE, "pizza");

    // Print every element
    for(std::string food : foods)
    {
        std::cout << food << '\n';
    }

    return 0;
}*/