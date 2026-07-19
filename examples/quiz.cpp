#include <iostream>
#include <string>
#include <cctype> // for toupper()

int main()
{
    // Array of questions
    std::string questions[] =
    {
        "1. What year was C++ created?: ",
        "2. Who invented C++?: ",
        "3. What is the predecessor of C++?: ",
        "4. Is the Earth flat?"
    };


    // 2D array of options
    // 4 questions × 4 options
    std::string options[][4] =
    {
        {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},

        {"A. Guido van Rossum",
         "B. Bjarne Stroustrup",
         "C. John Carmack",
         "D. Mark Zuckerberg"},

        {"A. C", "B. C+", "C. C--", "D. B++"},

        {"A. yes",
         "B. no",
         "C. sometimes",
         "D. what's Earth?"}
    };


    // Correct answers
    char answerKey[] = {'C', 'B', 'A', 'B'};


    // Find number of questions
    int size = sizeof(questions) / sizeof(questions[0]);


    char guess; // Stores user's answer

    int score = 0; // Stores correct answers


    // Loop through every question
    for(int i = 0; i < size; i++)
    {
        // Display question border
        std::cout << "*******************************\n";

        // Display current question
        std::cout << questions[i] << '\n';

        // Display question border
        std::cout << "*******************************\n";


        // Display 4 options
        for(int j = 0;
            j < sizeof(options[i]) / sizeof(options[i][0]);
            j++)
        {
            std::cout << options[i][j] << '\n';
        }


        // Get user's answer
        std::cin >> guess;


        // Convert lowercase answer to uppercase
        // Example: c → C
        guess = toupper(guess);


        // Check user's answer
        if(guess == answerKey[i])
        {
            std::cout << "CORRECT\n";

            // Increase score
            score++;
        }
        else
        {
            std::cout << "WRONG!\n";

            // Show correct answer
            std::cout << "Answer: "
                      << answerKey[i]
                      << '\n';
        }
    }


    // Display results
    std::cout << "*******************************\n";
    std::cout << "*           RESULTS           *\n";
    std::cout << "*******************************\n";


    // Display correct answers
    std::cout << "CORRECT GUESSES: "
              << score
              << '\n';


    // Display total questions
    std::cout << "# OF QUESTIONS: "
              << size
              << '\n';


    // Calculate percentage
    std::cout << "SCORE: "
              << (score / (double)size) * 100
              << "%";


    return 0;
}