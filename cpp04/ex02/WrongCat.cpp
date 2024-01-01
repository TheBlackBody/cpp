/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:37:56 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/28 13:19:46 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat: " << this->_type << " constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = copy;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat: " << this->_type << " destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongcat) 
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    if (this != &wrongcat)
        this->_type = wrongcat._type;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Wrong Meow!" << std::endl;
}