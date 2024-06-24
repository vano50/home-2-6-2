#include <iostream>
#include <string>
#include "heading.h"




int main() {
    setlocale(LC_ALL, "Russian");

    Counter z;
    std::string answer;
    std::string q;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
    std::cin >> answer;

    if (answer == "yes") {
        int number;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> number;
        z.setNumber(number);
    }
    else if (answer == "no") {
        int number = 0;
        z.setNumber(number);
    }
    else { std::cout << "Чё вы вводите?"; return 1; }

    do {

        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> q;

        z.setCommand(q);

        z.change();
        if ((z.getCommand()) == "=") {
            std::cout << z.getNumber() << std::endl;
        }


    } while ((z.getCommand()) != "x");

    std::cout << "До свидания!";

    return 0;
}