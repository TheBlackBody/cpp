/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:27:01 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/12 16:53:26 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./ScalarConverte.hpp"

ScalarConverte::ScalarConverte(std::string str) : _str(str)
{
	std::cout << "<ScalarConverte> Default constructor called" << std::endl;
	setC(str);
	setI(str);
	setF(str);
	setD(str);
}

ScalarConverte::ScalarConverte(const ScalarConverte &copy)
{
	std::cout << "<ScalarConverte> Copy constructor called" << std::endl;
	*this = copy;
}

ScalarConverte::~ScalarConverte()
{
	std::cout << "<ScalarConverte> Destructor called" << std::endl;
}

void	ScalarConverte::setC(std::string str)
{
	this->_c = ft_stoi(str);
}

void	ScalarConverte::setI(std::string str)
{
	this->_i = ft_stoi(str);
}

void	ScalarConverte::setF(std::string str)
{
	this->_f = ft_stoi(str);
}

void	ScalarConverte::setD(std::string str)
{
	this->_d = ft_stoi(str);
}

char	ScalarConverte::getC()
{
	return (this->_c);
}

int	ScalarConverte::getI()
{
	return (this->_i);
}

float	ScalarConverte::getF()
{
	return (this->_f);
}

double	ScalarConverte::getD()
{
	return (this->_d);
}

ScalarConverte &ScalarConverte::operator=(const ScalarConverte &scalar)
{
    std::cout << "operator assignement called" << std::endl;
    if (this != &scalar)
    {
    	_str = scalar._str;
    	_c = scalar._c;
    	_i = scalar._i;
    	_f = scalar._f;
    	_d = scalar._d;
    }
    return (*this);
}
