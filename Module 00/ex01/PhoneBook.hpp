#ifndef PHONEBOOK
# define PHONEBOOK

#include "Contact.hpp"
class PhoneBook {
    unsigned int _count: 3;
    Contact contact[8];

    public:
        PhoneBook();
        ~PhoneBook();
        void addContact();
};

#endif