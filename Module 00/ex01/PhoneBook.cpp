#include "PhoneBook.hpp"
#include "Contact.hpp"
PhoneBook:: PhoneBook()
{
    this->_count = 0;
}

void PhoneBook:: addContact(void)
{
    if (!(this->_contact[this->_count].setContact(this->_count)))
        this->_count++;
    else
        std::cout << "Error: ADD contect" << std::endl;
    
}

PhoneBook:: ~PhoneBook()
{

}

int PhoneBook:: getCount()
{
	return this->_count;
}

std::string PhoneBook:: checkLen(std::string str)
{
    std::string new_str;

	new_str = str;
	if (str.length() > 10)
	{
		new_str.insert(9, ".");
		new_str = new_str.substr(0, 10);
	}
	return new_str;
}

void PhoneBook:: searchContact(void)
{
    int index = getCount();
    int i = 0;
    std::cout << "+----------+----------+----------+----------+" << std::endl;
    std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << "|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
    while (index > i)
    {
        std::cout << "|" << std::setw(10) << _contact[i].getIndex() << "|" \
 			<< std::setw(10) << checkLen(_contact[i].getFirstName()) << "|" \
 			<< std::setw(10) << checkLen(_contact[i].getLastName()) << "|" \
 			<< std::setw(10) << checkLen(_contact[i].getNickName()) << "|" \
 			<< std:: endl;
		std::cout << "+----------+----------+----------+----------+\n";
        i++;
    }
    std::cout << "Enter index of contact to show more info: ";
        
    std::cin >> index;
    if (index < 0 || index > 7)
	{
		std::cout << std::endl << "Index error\n"<< std::endl;
		return ;
	}
	this->_contact[index].displayInfoOfElem();

}


void PhoneBook:: exitFunc(void)
{
    exit(EXIT_SUCCESS);
}