/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:39:11 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/15 16:40:28 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>
#include <cstdlib>

template<typename tab>
class Array
{
    private :
        tab *_array;
        unsigned int _len;
    public :
        Array();
        Array(unsigned int n);
        Array(Array const &copy);
        ~Array();

        Array &operator=(Array const &array);
        tab &operator[](unsigned int index);

        class OutOfBounds : public std::exception
        {
            public :
                virtual const char *what() const throw()
                {
                    return "Out of bounds";
                }
        };

        unsigned int size() const;
};

# include "Array.TPP"

#endif