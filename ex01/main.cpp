#include "PhoneBook.hpp"
#include <iostream>
#include <cctype>
#include <string>

int main (void)
{
    std::string input;
    PhoneBook phone;

    while (input != "EXIT")
    {
        std::getline(std::cin, input);
        if (input == "ADD")
            phone.add();
        else if (input == "SEARCH")
            phone.search();
    }
    return (0);
}