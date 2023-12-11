/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:41:22 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/06 18:27:27 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    return;
}

Contact::~Contact()
{
    return;
}

bool    check_num(std::string& str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return (false);
    }
    return (true);
}

std::string Contact::_getImput(std::string str, int num) const
{
    std::string input = "";
    bool        valid = false;
    do
    {
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        if (std::cin.good() && !input.empty())
        {
            if (num == 1 && check_num(input) == false)
            {
                std::cout << "Invalid input, your input should be integer please try again." << std::endl;
                valid = false;
            }
            else
                valid = true;
        
        }
        else
        {
            std::cin.clear();
            std::cout << "Invalid input; please try again." << std::endl;
        }
    } 
    while (!valid);
    return (input);
}

void    Contact::init(void)
{
    std::cin.ignore();
    this->_firstName = this->_getImput("Please enter your First Name :", 0);
    this->_lastName = this->_getImput("Please enter your Last Name :", 0);
    this->_nickName = this->_getImput("Please enter your Nickname :", 0);
    this->_phoneNumber = this->_getImput("Please enter your Phone Number :", 1);
    this->_darksetSecret = this->_getImput("Please enter your Darkset Secret :", 0);
    std::cout << std::endl;
}

std::string Contact::_printLen(std::string str) const
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void    Contact::setIndex(int i)
{
    this->_index = i;
}

void    Contact::view(int index) const
{
    if (this->_firstName.empty() || this->_lastName.empty() || this->_nickName.empty())
        return ;
    std::cout << "|" << std::setw(10) << index << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_firstName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_lastName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_nickName) << std::flush;
    std::cout << "|" << std::endl;
}

bool    Contact::display(int index) const
{
    if (this->_firstName.empty() || this->_lastName.empty() || this->_nickName.empty())
        return (false);
    std::cout << std::endl;
    std::cout << "CONTACT : " << index << std::endl;
    std::cout << "First Name: " << this->_firstName << std::endl;
    std::cout << "Last Name: " << this->_lastName << std::endl;
    std::cout << "Nickname: " << this->_nickName << std::endl;
    std::cout << std::endl;
    return (true);
}