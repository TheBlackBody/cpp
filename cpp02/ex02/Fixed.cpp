/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 02:36:04 by sfernand          #+#    #+#             */
/*   Updated: 2024/01/10 13:39:25 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed(0)
{
    
}

Fixed::Fixed(const int n) : _fixed(n << _bit)
{
   
}

Fixed::Fixed(const float n) : _fixed(roundf(n * (1 << _bit)))
{
    
}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    if ( this != &fixed )
        this->_fixed = fixed.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    
}

int Fixed::getRawBits(void) const
{
    return this->_fixed;
}

void    Fixed::setRawBits(int const raw)
{
    this->_fixed = raw;
}

float   Fixed::toFloat(void) const
{
    return static_cast<float>( this->getRawBits() ) / (1 << _bit);
}

int     Fixed::toInt(void) const
{
    return this->_fixed >> _bit;
}

std::ostream & operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();
    return o;
}

bool    Fixed::operator>(const Fixed &fixed) const
{   
    return this->getRawBits() > fixed.getRawBits();
}

bool    Fixed::operator<(const Fixed &fixed) const
{
    return this->getRawBits() < fixed.getRawBits();
}

bool    Fixed::operator>=(const Fixed &fixed) const
{
    return this->getRawBits() >= fixed.getRawBits();
}

bool    Fixed::operator<=(const Fixed &fixed) const
{
    return this->getRawBits() <= fixed.getRawBits();
}

bool    Fixed::operator==(const Fixed &fixed) const
{
    return this->getRawBits() == fixed.getRawBits();
}

bool    Fixed::operator!=(const Fixed &fixed) const
{
    return this->getRawBits() != fixed.getRawBits();
}

Fixed   Fixed::operator+(const Fixed &fixed) const
{
    return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed   Fixed::operator-(const Fixed &fixed) const
{
    return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed   Fixed::operator*(const Fixed &fixed) const
{
    return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed   Fixed::operator/(const Fixed &fixed) const
{
    return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed&  Fixed::operator++(void)
{
    ++this->_fixed;
    return *this;
}

Fixed&  Fixed::operator--(void)
{
    --this->_fixed;
    return *this;
}

Fixed  Fixed::operator++(int)
{
    Fixed copy(*this);
    copy._fixed = this->_fixed++;
    return copy;
}

Fixed  Fixed::operator--(int)
{
    Fixed copy(*this);
    copy._fixed = this->_fixed--;
    return copy;
}

Fixed&  Fixed::min(Fixed &first, Fixed &sec)
{
    if (first.getRawBits() < sec.getRawBits())
        return first;
    return sec;
}

Fixed&  Fixed::max(Fixed &first, Fixed &sec)
{
    if (first.getRawBits() > sec.getRawBits())
        return first;
    return sec;
}

const Fixed&  Fixed::min(const Fixed &first, const Fixed &sec)
{
    if (first.getRawBits() < sec.getRawBits())
        return first;
    return first;
}

const Fixed&  Fixed::max(const Fixed &first, const Fixed &sec)
{
    if (first.getRawBits() > sec.getRawBits())
        return sec;
    return sec;
}
