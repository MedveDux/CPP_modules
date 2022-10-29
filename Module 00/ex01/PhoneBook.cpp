#include "PhoneBook.hpp"
#include "Contact.hpp"
PhoneBook:: PhoneBook()
{
    this->_count = 0;
}
void PhoneBook:: addContact(void)
{
    if (this->contact[this->_count].setContact(this->_count))
        this->_count++;
}

PhoneBook:: ~PhoneBook()
{

}