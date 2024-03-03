/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:32:19 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/22 14:11:54 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void check_str(std::string str)
{
    try
    {
        if (str.find_first_not_of("0123456789+-/* ") != std::string::npos)
            throw RPN::error();
    }
    catch(const RPN::error &e)
    {
        std::cerr << e.what() << ": One char was not supported" << '\n';
        exit(0);
    }
    return;
}

int main(int ac, char **av)
{
    try
    {
        if (ac != 2)
            throw RPN::error();
    }
    catch (const RPN::error &e)
    {
        std::cout << e.what() << " : invalid argument" << std::endl;
        return (0);
    }
    
    check_str(av[1]);

    RPN rpn;

    int result = rpn.calculate(av[1]);

    std::cout << result << std::endl;
    
    return (0);
}