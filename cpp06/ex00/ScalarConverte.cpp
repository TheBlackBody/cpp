/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:27:01 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/11 11:11:58 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./ScalarConverte.hpp"

ScalarConverte::ScalarConverte(std::string str) : _str(str)
{
	std::cout << "<ScalarConverte> Default constructor called" << std::endl;
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

void    ScalarConverte::setI(std::string str)
{
	std::cout << str << std::endl;
    //this->_i = std::stoi(str, 0, 10);
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
