/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:41:18 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/05 15:33:55 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook book;
    std::string input = "";
    book.launch();
    while (input.compare("EXIT"))
    {
        if(input.compare("ADD") == 0)
            book.addContact();
        else if (input.compare("SEARCH") == 0)
        {
            book.printContacts();
            book.search();
        }
        std::cout << "Input >";
        std::cin >> input;
    }
    return (0);
}