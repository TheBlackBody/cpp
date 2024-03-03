/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:23:44 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/19 18:03:21 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Span.hpp"

Span::Span()
{

}

Span::Span(unsigned int N)
{
    std::cout << "<Span> constructor called" << std::endl;
    this->_N = N;
}

Span::Span(const Span &copy)
{
    std::cout << "<Span> copy constructor called" << std::endl;
    *this = copy;
}

Span::~Span()
{
    std::cout << "<Span> destructor called" << std::endl;
}

Span &Span::operator=(const Span &span)
{
    if (this != &span)
	{
		this->_N = span._N;
		this->_data = span._data;
	}
	return (*this);
}

void Span::addNumber(int number)
{
    if (this->_data.size() == this->_N)
        throw std::out_of_range("This vector is full !");
    this->_data.push_back(number);
}

int Span::shortestSpan()
{
    int shortest;
    int diff;

    if (this->_data.size() <= 1)
        throw std::out_of_range("You should be have more of 1 number on vector");
    shortest = INT_MAX;
	for (unsigned int i = 0; i < this->_data.size(); ++i)
	{
		for (unsigned int j = 0; j < this->_data.size(); ++j)
		{
			if (i == j)
				continue ;
			diff = std::abs(this->_data[i] - this->_data[j]);
			if (diff < shortest)
				shortest = diff;
		}
	}
    return (shortest);
}

int Span::longestSpan()
{
    int longest;
    int diff;

    if (this->_data.size() <= 1)
        throw std::out_of_range("You should be have more of 1 number on vector");
    longest = INT_MIN;
	for (unsigned int i = 0; i < this->_data.size(); ++i)
	{
		for (unsigned int j = 0; j < this->_data.size(); ++j)
		{
			if (i == j)
				continue ;
			diff = std::abs(this->_data[i] - this->_data[j]);
			if (diff > longest)
				longest = diff;
		}
	}
    return (longest);
}