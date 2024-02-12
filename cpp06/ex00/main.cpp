/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:04:22 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/12 15:58:01 by sfernand         ###   ########.fr       */
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
    std::cout << "________________________________________________________" << std::endl;
    char c;
    bool error = false;
    if (check_num(str))
    {
        c = i;
        try
        {
            if ((c < 32 || c >= 127) && c != -1)
            { 
                error = true;
                throw Non_Displayable();
            }
        }
        catch (const Non_Displayable& e)
        {
            std::cout << "char = " << e.what() << std::endl;
        }
    }
    else 
    {
        try
        {
            if (!check_num(str))
            {
                error = true;
                throw Impossible();
            }
        }
        catch(const Impossible& e)
        {
            std::cout << "char = " << e.what() << std::endl;
        }
    }
    if (error == false)
        std::cout << "char = " << c << std::endl;
    std::cout << "________________________________________________________" << std::endl;
    if (check_num(str))
    {
        i = ft_stoi(str);
        std::cout << "int = " << i << std::endl;
    }
    else 
    {
        try
        {
            if (!check_num(str))
                throw Impossible();
        }
        catch(const Impossible& e)
        {
            std::cout << "int = " << e.what() << std::endl;
        }
        
    }
    std::cout << "________________________________________________________" << std::endl;  
    if (check_num(str))
    {
        float f = ft_stof(str);
        std::cout << "float = " << std::fixed << std::setprecision(ft_precision(str)) << f << "f" << std::endl;
    }
    else 
    {
        try
        {
            if (!check_num(str))
                throw Not_A_Number();
        }
        catch(const Not_A_Number& e)
        {
            std::cout << "float = " << e.what() << std::endl;
        }
        
    }
    std::cout << "________________________________________________________" << std::endl;
 if (check_num(str))
    {
        double d = ft_stod(str);
        std::cout << "double = " << std::fixed << std::setprecision(ft_precision(str)) << d << std::endl;
    }
    else 
    {
        try
        {
            if (!check_num(str))
                throw Not_A_Number();
        }
        catch(const Not_A_Number& e)
        {
            std::cout << "float = " << e.what() << std::endl;
        }
        
    }
    std::cout << "________________________________________________________" << std::endl;
    return (0);
}