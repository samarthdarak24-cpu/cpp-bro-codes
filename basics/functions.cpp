#include <iostream>

void happyBirthday(std::string name, int age) {
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear " << name << "!\n";
    std::cout << "Happy Birthday to you!\n\n";

    std::cout << "You are " << age << " years old!\n\n";
}

int main() {
    int age = 29;
    std::string name = "Jeremy";
    happyBirthday(name, age);
    happyBirthday(name, age);

    return 0;
}

/* 1)fction before one need to definr if last show 
#include <iostream>

void happyBirthday();

int main()

// function = a block of reusable code

happyBirthday();

return 0;

void happyBirthday(){
std :: cout << "Happy Birthday to you!\n";
std :: cout << "Happy Birthday to you!\n";
std :: cout << "Happy Birthday dear you!\n";
std :: cout << "Happy Birthday to you!\n\n";*/



/*2)void happyBirthday(std :: string name);

int main()

// function = a block of reusable code

std :: string name = "Bro";

happyBirthday(name));

return 0;

void happyBirthday(std :: string name){
std :: cout << "Happy Birthday to " << name << '\n';
std :: cout << "Happy Birthday to " << name << '\n';
std :: cout << "Happy Birthday dear " << name << '\n'

}*/