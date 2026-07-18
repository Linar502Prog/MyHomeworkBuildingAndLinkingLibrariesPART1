#include <iostream>
#include"GreeterLibrary.h"
#include"Windows.h"
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    GreeterLibrary::Greeter greeter;
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << greeter.greet(name);
    return EXIT_SUCCESS;
}

