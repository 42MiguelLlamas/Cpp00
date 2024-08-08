#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        void add();
        void search();
        int print();
    private:
        Contact contacts[8];
        int     index;
};

#endif