/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 08:26:13 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/14 16:53:48 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_fixed);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _fixed = raw;
}

Fixed   &Fixed::operator=(Fixed &fixed)
{
    std::cout << "Copy assignement operator called" << std::endl;
    this->_fixed = fixed.getRawBits();
    return (*this);
}