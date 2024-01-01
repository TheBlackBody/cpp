/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:09:46 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/27 17:55:33 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Default")
{
    std::cout << "Animal: " << this->_type << " constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal: " << this->_type << " constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
    std::cout << "Animal operator called" << std::endl;
    if (this != &animal)
    {
        this->_type = animal._type;
    }
    return (*this);
}

void    Animal::makeSound(void) const
{
    std::cout << "Animal make Sound Called" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}
