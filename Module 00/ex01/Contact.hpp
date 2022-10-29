

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
class Contact {
    private:
    std::string _index;
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkestSecret;
    
    public:
        int setContact(int index);
         ~Contact();
};
#endif