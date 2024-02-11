/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:04:22 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/11 17:24:40 by sfernand         ###   ########.fr       */
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
    int i = ft_stoi(str);
    std::cout << i << std::endl;
    std::cout << "________________________________________________________" << std::endl;
    char c;
    if (check_num(str) == false)
        c = ft_stoc(str);
    else
        c = i;
    if (c == -1)
    {
        std::cout << "Error: your string shold be have 1 character" << std::endl;
        return (0);
    }
    std::cout << "char = " << c << std::endl;
    std::cout << "________________________________________________________" << std::endl;
    i = ft_stoi(str);
    std::cout << "int = " << i << std::endl;
    std::cout << "________________________________________________________" << std::endl;
    return (0);
}