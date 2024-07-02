#include <iostream>
#include "heading.h"


    void Counter::setNumber(int number) { this->number = number; }
    void Counter::setCommand(std::string q) { command = q; }
    std::string Counter::getCommand() { return command; }
    int Counter::getNumber() { return number; }

    void Counter::change() {
        if (command == "+")
            ++number;
        if (command == "-")
            --number;

    }


