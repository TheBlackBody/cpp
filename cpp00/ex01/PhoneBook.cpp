/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 23:20:48 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/15 14:50:29 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    return;
}

PhoneBook::~PhoneBook()
{
    return;
}

void    PhoneBook::launch(void) const
{
    std::cout << "---------[How to use]---------" << std::endl;
    std::cout << "ADD : To add contact" << std::endl;
    std::cout << "SEARCH : To search a contact" << std::endl;
    std::cout << "EXIT : To exit phonebook" << std::endl;
    std::cout << "------------------------------" << std::endl;
    std::cout << std::endl;
}

void    PhoneBook::addContact(void)
{
    static int  i;

    this->_contacts[i % 8].init();
    this->_contacts[i % 8].setIndex(i%8);
    i++;
}

void    PhoneBook::printContacts(void) const
{
    for (int i = 0; i < 8; i++)
        this->_contacts[i].view(i);
}

int     PhoneBook::_readImput() const
{
    int     input = -1;
    bool    valid = false;
    do
    {
        std::cout << std::endl;
        std::cout << "Please enter the contact index: " << std::flush;
        std::cin >> input;
        if (std::cin.good() && (input >= 0 && input <= 8))
            valid = true;
        else
        {
            std::cin.clear();
            std::cin.ignore(2147483647, '\n');
            std::cout << "Invalid index" << std::endl << "please re-enter." << std::endl;
            valid = false;
        }
    }
    while (!valid);
    return (input);
}

void    PhoneBook::search(void) const
{
    int i = this->_readImput();
    if (this->_contacts[i].display(i) == false)
    {
        std::cout << "Invalid index" << std::endl << "please re-enter." << std::endl;
        PhoneBook::search();
    }
}
