/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:09:43 by sfernand          #+#    #+#             */
/*   Updated: 2024/01/17 13:31:56 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat: " << this->_type << " constructor called" << std::endl;
    this->_brainCat = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->_brainCat = new Brain();
    this->_type = copy._type;
}

Cat::~Cat()
{
    std::cout << "Cat: " << this->_type << " destructor called" << std::endl;
    delete _brainCat;
}

Cat &Cat::operator=(const Cat &cat)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &cat)
    {
        this->_type = cat._type;
        if (this->_brainCat)
            delete this->_brainCat;
        this->_brainCat = new Brain(*cat._brainCat);
    }
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}