#include "Contact.hpp"

    Contact:: Contact()
    {
        
    }

    Contact:: ~Contact()
    {

    }

    void	Contact:: setNull(void)
    {
        this->_firstName = "";
        this->_lastName = "";
        this->_nickName = "";
        this->_phoneNumber = "";
        this->_darkestSecret = "";
    }

    int Contact:: checkContant(std::string get)
    {

        if (get.empty())
        {
            setNull();
            std::cout << "Error: cannot create empty contact" << std::endl;
            return (1);
        }
        return (0);
    }

    int Contact:: getIndex(void)
    {
        return (this->_index);
    }

    std::string Contact:: getFirstName(void)
    {
        return (this->_firstName);
    }

    std::string Contact:: getLastName(void)
    {
        return (this->_lastName);
    }

    std::string Contact:: getNickName(void)
    {
        return (this->_nickName);
    }

    std::string Contact:: getPhoneNumber(void)
    {
        return (this->_phoneNumber);
    }

    std::string Contact:: getDarkestSecret(void)
    {
        return (this->_darkestSecret);
    }

    void	Contact:: displayInfoOfElem(void)
    {
        std::cout << std::endl << "First name: " << this->_firstName << std::endl;
        std::cout << "Last name: " << this->_lastName << std::endl;
        std::cout << "Nickname: " << this->_nickName << std::endl;
        std::cout << "Phone number: " << this->_phoneNumber << std::endl;
        std::cout << "Darkest secret: " << this->_darkestSecret << "\n" << std::endl;
    }
    int Contact:: setContact(int index)
    {
        std::string get;
        this->_index = index;

        std::cout << "Enter your first name, pealse" << std::endl;
        std::getline(std::cin, this->_firstName);
        if (checkContant(this->_firstName))
            return (1);
        std::cout << "Enter your last name, pealse" << std::endl;
        std::getline(std::cin, this->_lastName);
        if (checkContant(this->_lastName))
            return (1);
        std::cout << "Enter your nickname, pealse" << std::endl;
        std::getline(std::cin, this->_nickName);
        if (checkContant(this->_nickName))
            return (1);
        std::cout << "Enter your phone number, pealse" << std::endl;
        std::getline(std::cin, this->_phoneNumber);
        if (checkContant(this->_phoneNumber))
            return (1);
        std::cout << "Enter your darkest secret, pealse" << std::endl;
        std::getline(std::cin, this->_darkestSecret);
        if (checkContant(this->_darkestSecret))
            return (1);
        return (0);
    }

