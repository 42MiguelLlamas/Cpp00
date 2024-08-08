#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook() {
    std::cout << "Bienvenido al PhoneBook\n";
};


PhoneBook::~PhoneBook() {
    std::cout << "Hasta la vista!\n";
};

void    PhoneBook::add()
{
    contacts[(this->index) % 8].get_info();
    index++;
}

void    PhoneBook::search()
{
    std::string str;

    if(!print())
        return ;
    std::cout << "Please, enter the index: ";
    if (std::getline(std::cin, str) && str != "")
    {
        if (str.size() == 1 && str[0] >= '0' && str[0] <= '7' &&
            contacts[str[0] - '0'].get_name().size())
            {
                contacts[str[0] - '0'].display_info();
                return ;
            }
            
    }
    if (str != "")
        std::cout << "Invalid index! Please, search again with a valid Index." << std::endl;

}

std::string	 adjust(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(10);
		str[str.size() - 1] = '.';
	}
	return (str);
}

std::string add_spaces(int n)
{
	std::string	str;

	while (n--)
		str.append(" ");
	return (str);
}

int    PhoneBook::print()
{
    int         c;
    std::string str;

    if (index == 0)
    {
        std::cout << "The PhoneBook is empty! Please, add a new contact.\n";
        return(0);
    }
    else
    {
        std::cout << " ___________________________________________ \n";
        std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
        std::cout << "|----------|----------|----------|----------|\n";
        c = 0;
        while (c < 8)
        {
            str = c + '0';
            str = adjust(str);
            std::cout << "|" << add_spaces(10 - str.size()) << str;
            str = adjust(contacts[c].get_name());
            std::cout << "|" << add_spaces(10 - str.size()) << str;
            str = adjust(contacts[c].get_last());
            std::cout << "|" << add_spaces(10 - str.size()) << str;
            str = adjust(contacts[c].get_nick());
            std::cout << "|" << add_spaces(10 - str.size()) << str;
            std::cout << "|" << std::endl;
            std::cout << " ------------------------------------------- " << std::endl;
            c++;
        }
    }
    return (1);
}

