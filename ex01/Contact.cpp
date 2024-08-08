#include "Contact.hpp"

Contact::Contact() {};


Contact::~Contact() {};

void Contact::get_info()
{
    std::cout << "Please, enter the first name: ";
    std::getline(std::cin, first_name);
    std::cout << "Last Name: ";
    std::getline(std::cin, last_name);
    std::cout << "Nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Phone Number: ";
    std::getline(std::cin, phone_number);
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, darkest_secret);
    std::cout << "New Contact Added!\n";
};

void Contact::display_info()
{
    std::cout << "First Name: " << first_name << std::endl;
    std::cout << "Last Name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phone_number << std::endl;
    std::cout << "Darkest Secret: " << darkest_secret << std::endl;
};

std::string Contact::get_name()
{
    return first_name;
};

std::string Contact::get_last()
{
    return last_name;
};

std::string Contact::get_nick()
{
    return nickname;
};

