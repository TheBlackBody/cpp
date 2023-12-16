/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:57:38 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/15 14:40:02 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    std::string name;

    std::cout << "Creating zombie on the stack." << std::endl;
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;

    Zombie zombi1(name);
    
    std::cout << "Creating zombie on the heap." << std::endl;
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;

    Zombie *zombi2 = newZombie(name);
    anoncement(name);
    delete zombi2;

    std::cout << "Calling randomChump()." << std::endl;
    randomChump("randi");
    return (0);
}