/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.TPP                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:39:20 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/15 16:38:02 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "./Array.hpp"

template<typename tab>
Array<tab>::Array()
{
    this->_array = new tab[0];
    this->_len = 0;
}

template<typename tab>
Array<tab>::Array(unsigned int n)
{
    this->_array = new tab[n];
    this->_len = n;
}

template<typename tab>
Array<tab>::Array(Array const &copy)
{
    unsigned int size = copy.size();
    this->_array = new tab[size];
    this->_len = size;
    for (unsigned int i = 0; i < size; i++)
    {
        this->_array[i] = copy._array[i];
    }
}

template<typename tab>
Array<tab>::~Array()
{
    delete [] this->_array;
}

template<typename tab>
Array<tab> &Array<tab>::operator=(Array const &array)
{
    unsigned int size = array.size();
    delete [] this->_array;
    this->_array = new tab[size];
    this->_len = size;
    for (unsigned int i = 0; i < size; i++)
    {
        this->_array[i] = array._array[i];
    }
    return (*this);
}

template<typename tab>
tab &Array<tab>::operator[](unsigned int index)
{
    if (index < this->_len)
        return (this->_array[index]);
    else 
        throw OutOfBounds();
}

template <typename tab>
unsigned int Array<tab>::size() const
{
    return (this->_len);
}

#endif