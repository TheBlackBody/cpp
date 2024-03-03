/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:04:22 by sfernand          #+#    #+#             */
/*   Updated: 2024/03/03 16:06:59 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScalarConverte.hpp"

int main(int ac, char **av)
{
    if (ac == 1 || ac >= 3)
    {
        std::cout << "You should entry ./convert <string to convert>" << std::endl;
        return (0);
    }
    std::string str = av[1];
    ScalarConverte::Convert(str);
    return (0);
}