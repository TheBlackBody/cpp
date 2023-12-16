/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 08:26:20 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/14 16:46:31 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;

    std::cout << a.getRawBits() <<std::endl;
    std::cout << b.getRawBits() <<std::endl;
    std::cout << c.getRawBits() <<std::endl;

    return 0;
}