/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 03:16:18 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/28 18:46:31 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b( Fixed(5.05f) * Fixed(2) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    if (a < b)
     std::cout << "a < b" << std::endl;
    if (a > b)
     std::cout << "a > b" << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;
    
    return 0;
}