/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:41:28 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/12 15:35:19 by sfernand         ###   ########.fr       */
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
        if (str[i] == '.')
            break;
        num = num * 10 + (str[i] - '0');
        ++i;
    }
    return (num * sign);
}

float   ft_stof(std::string str)
{
    size_t i = 0;
    int sign = 1;
    float result = 0.0f;
    bool decimalPart = false;
    float decimalFactor = 0.1f;
    
    while (i < str.length() && std::isspace(str[i]))
    {
        ++i;
    }
    if (i < str.length() && (str[i] == '+' || str[i] == '-'))
    {
        sign = (str[i] == '-') ? -1 : 1;
        ++i;
    }
    while (i < str.length() && (std::isdigit(str[i]) || (str[i] == '.' && !decimalPart))) {
        if (str[i] == '.') {
            decimalPart = true;
        } else {
            if (decimalPart) {
                result = result + static_cast<float>(str[i] - '0') * decimalFactor;
                decimalFactor *= 0.1f;
            } else {
                result = result * 10.0f + static_cast<float>(str[i] - '0');
            }
        }
        ++i;
    }
    return (result * sign);
}

double   ft_stod(std::string str)
{
    size_t i = 0;
    double result = 0.0;
    int sign = 1;
    bool decimalPart = false;
    double decimalFactor = 0.1;
    
    while (i < str.length() && std::isspace(str[i]))
    {
        ++i;
    }
    if (i < str.length() && (str[i] == '+' || str[i] == '-'))
    {
        sign = (str[i] == '-') ? -1 : 1;
        ++i;
    }
   while (i < str.length() && (std::isdigit(str[i]) || (str[i] == '.' && !decimalPart)))
   {
        if (str[i] == '.') {
            decimalPart = true;
        } else {
            if (decimalPart) {
                result = result + static_cast<double>(str[i] - '0') * decimalFactor;
                decimalFactor *= 0.1;
            } else {
                result = result * 10.0 + static_cast<double>(str[i] - '0');
            }
        }
        ++i;
        if (str[i] == 'f')
            i++;
    }
    return (result * sign);
}

bool    check_num(std::string& str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
        {
            if (str[i] == '.' || str[i] == '-' || str[i] == 'f')
                return (true);
            return (false);
        }
    }
    return (true);
}

int ft_precision(std::string str)
{
    int i = 0;
    int a = 0;
    while (str[i] && str[i] != '.')
        i++;
    if (str[i] == '.')
        i++;
    while (str[i])
    {
        if (std::isdigit(str[i]))
            a++;
        i++;
    }
    if (a == 0)
        return (1);
    return (a);
}