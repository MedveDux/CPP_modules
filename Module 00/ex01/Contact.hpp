

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
class Contact {
    private:
    int _index;
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkestSecret;
    
    public:
        int setContact(int index);
        Contact();
        ~Contact();
        int getIndex(void);
        std::string  getFirstName(void);
        std::string  getLastName(void);
        std::string getNickName(void);
        std::string getPhoneNumber(void);
        std::string getDarkestSecret(void);
        void    displayInfoOfElem(void);
};
#endif