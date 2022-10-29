#include "Contact.hpp"

    int Contact:: setContact(int index)
    {
        std::string get;
        this->_index = index;
        std::getline(std::cin, this->_firstName);
        std::getline(std::cin, this->_lastName);
        std::getline(std::cin, this->_nickName);
        std::getline(std::cin, this->_phoneNumber);
        std::getline(std::cin, this->_darkestSecret);
        return (0);
    }

    Contact:: ~Contact()
    {

    }