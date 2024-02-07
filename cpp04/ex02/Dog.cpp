/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:09:50 by sfernand          #+#    #+#             */
/*   Updated: 2024/01/17 13:37:49 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Dog: " << this->_type << " constructor called" << std::endl;
    this->_brainDog = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->_brainDog = new Brain();
    this->_type = copy._type;
}

Dog::~Dog()
{
    std::cout << "Dog: " << this->_type << " destructor called" << std::endl;
    delete _brainDog;
}

Dog &Dog::operator=(const Dog &dog)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &dog)
    {
        this->_type = dog._type;
        if (this->_brainDog)
            delete this->_brainDog;
        this->_brainDog = new Brain(*dog._brainDog);
    }
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}