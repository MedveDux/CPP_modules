#ifndef PHONEBOOK
# define PHONEBOOK

#include "Contact.hpp"
#include <iomanip>
class PhoneBook {
    unsigned int _count: 3;
    Contact _contact[8];

    public:
        PhoneBook();
        ~PhoneBook();
        void    addContact();
        void    exitFunc(void);
        void    searchContact(void);
        int     getCount();
        std::string checkLen(std::string str);
};

#endif