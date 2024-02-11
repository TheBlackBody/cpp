/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:41:28 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/11 17:22:21 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Utils.hpp"

char ft_stoc(std::string str)
{
    if (str.length() > 1)
        return (-1);
    const char *c = str.c_str();
    char ch = c[0];
    return (ch);
}

int ft_stoi(std::string str)
{
    long num = 0;
    int sign = 1;
    size_t i = 0;
    while (i < str.length() && std::isspace(str[i]))
    {
        ++i;
    }
    if (i < str.length() && (str[i] == '+' || str[i] == '-'))
    {
        sign = (str[i] == '-') ? -1 : 1;
        ++i;
    }
    while (i < str.length())
    {
        try 
        {
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && (str[i] - '0') > INT_MAX % 10))
            {
                throw Out_OF_Range();
            }
        }
        catch (const Out_OF_Range& e)
        {
            std::cout << "Exception caught: " << e.what() << std::endl;
            return (0);
        }
        num = num * 10 + (str[i] - '0');
        ++i;
    }
    return (num * sign);
}

bool    check_num(std::string& str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return (false);
    }
    return (true);
}