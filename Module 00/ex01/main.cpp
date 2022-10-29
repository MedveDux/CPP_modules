#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string>

void print_messenger()
{
    std::cout << "\t------------------------------------" << std::endl;
    std::cout << "\t* Welcome to my awesome phonebook! *" << std::endl;
	std::cout << "\t* Use: ADD, SEARCH, EXIT           *" << std::endl;
	std::cout << "\t* ADD - add and save new contact   *" << std::endl;
	std::cout << "\t* SEARCH - show contact            *" << std::endl;
	std::cout << "\t* EXIT - close program             *" << std::endl;
    std::cout << "\t------------------------------------" << std::endl;

}

int main(void)
{
    PhoneBook phonebook;
    print_messenger();
    std::string mes;
    std::cout << ">";
    while (getline(std::cin, mes))
    {
        std::cout << ">";
        if (mes.empty())
            std::cout << "\tEmty string\n<" ;
        else if (mes == "ADD")
            phonebook.addContact();
        
    }
    return (0);
}