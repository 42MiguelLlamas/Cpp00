#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cctype>
#include <string>

class Contact
{
    public:
        Contact(void);
        ~Contact(void);
        void get_info();
        void display_info();
        std::string get_name();
        std::string get_last();
        std::string get_nick();

    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
};

#endif