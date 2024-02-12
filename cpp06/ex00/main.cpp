/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:04:22 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/12 17:07:15 by sfernand         ###   ########.fr       */
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
    bool error = false;
    ScalarConverte convert(str);
    std::cout << "________________________________________________________" << std::endl;
    if (check_num(str))
    {
        try
        {
            if ((convert.getC() < 32 || convert.getC() >= 127) && convert.getC() != -1)
            {
                error = true;
                throw Non_Displayable();
            }
        }
        catch(const Non_Displayable& e)
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
        std::cout << "char = " << convert.getC() << std::endl;
    std::cout << "________________________________________________________" << std::endl;
    if (check_num(str))
        std::cout << "int = " << convert.getI() << std::endl;
    else
    {
        try
        {
            if (!check_num(str))
                throw Impossible();
        }
        catch (const Impossible& e)
        {
            std::cout << "int = " << e.what() << std::endl;
        }
    }
    std::cout << "________________________________________________________" << std::endl;
    if (check_num(str))
        std::cout << "float = " << std::fixed << std::setprecision(ft_precision(str)) << convert.getF() << "f" << std::endl;
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
        std::cout << "double = " << std::fixed << std::setprecision(ft_precision(str)) << convert.getD() << std::endl;
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
    std::cout << std::endl;
//copy part
    std::cout << std::endl;
    ScalarConverte copy(convert);
    std::cout << "________________________________________________________" << std::endl;
    if (check_num(str))
    {
        try
        {
            if ((copy.getC() < 32 || copy.getC() >= 127) && copy.getC() != -1)
            {
                error = true;
                throw Non_Displayable();
            }
        }
        catch(const Non_Displayable& e)
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
        std::cout << "char = " << copy.getC() << std::endl;
    std::cout << "________________________________________________________" << std::endl;
    if (check_num(str))
        std::cout << "int = " << copy.getI() << std::endl;
    else
    {
        try
        {
            if (!check_num(str))
                throw Impossible();
        }
        catch (const Impossible& e)
        {
            std::cout << "int = " << e.what() << std::endl;
        }
    }
    std::cout << "________________________________________________________" << std::endl;
    if (check_num(str))
        std::cout << "float = " << std::fixed << std::setprecision(ft_precision(str)) << copy.getF() << "f" << std::endl;
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
        std::cout << "double = " << std::fixed << std::setprecision(ft_precision(str)) << copy.getD() << std::endl;
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