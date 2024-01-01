/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:09:43 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/28 12:12:27 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat: " << this->_type << " constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat::~Cat()
{
    std::cout << "Cat: " << this->_type << " destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &cat)
        this->_type = cat._type;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}