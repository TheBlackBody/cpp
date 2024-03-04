/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:27:01 by sfernand          #+#    #+#             */
/*   Updated: 2024/03/04 10:37:39 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./ScalarConverte.hpp"
#include <string>



ScalarConverte::ScalarConverte()
{
}

ScalarConverte::ScalarConverte(const ScalarConverte &copy)
{
	*this = copy;
}

ScalarConverte::~ScalarConverte()
{
}

ScalarConverte &ScalarConverte::operator=(const ScalarConverte &scalar)
{
	if (this != &scalar)
	{
	}
	return (*this);
}

void	ScalarConverte::Convert(std::string str)
{   
	ConvertC(str);
	ConvertI(str);
	ConvertF(str);
	ConvertD(str);
}

void	ScalarConverte::ConvertC(std::string str)
{
	bool error = false;
    std::cout << "________________________________________________________" << std::endl;
	int i = ft_stoi(str);
    if ((i < 0 && str.c_str()[0] != '-') || (i > 0 && str.c_str()[0] == '-'))
        return;
    char c = ft_stoi(str);
    if (check_num(str))
    {
        if ((static_cast<int>(str.c_str()[0]) > 31 && static_cast<int>(str.c_str()[0]) < 127) && str.length() == 1 && (static_cast<int>(str.c_str()[0]) == 0 && static_cast<int>(str.c_str()[0]) > 9))
        {
            std::cout << "char = " << str << std::endl;
            return;
        }
        try
        {
            if ((((c < 32 || c >= 127) && c != -1) && str != "-") || (c >= 127 && c < 0))
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
            if ((str.c_str()[0] > 31 && str.c_str()[0] < 127) && str.length() == 1)
            {
                std::cout << "char = " << str << std::endl;
                return;
            }
            else if (!check_num(str) || str == "f" || str == ".")
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
    try
    {
        if (str == "-1" || str == "-1f" || (c >= 127 && c < 0) || str == "2147483647" || str == "-2147483648")
        {
            throw Non_Displayable();
            return;
        }
    }
    catch(const Non_Displayable& e)
    {
        std::cout << "char = " << e.what() << std::endl;
        return;
    }
    if (error == false)
        std::cout << "char = " << c << std::endl;
}

void	ScalarConverte::ConvertI(std::string str)
{
    std::cout << "________________________________________________________" << std::endl;
	int i = ft_stoi(str);
    if ((i < 0 && str.c_str()[0] != '-') || (i > 0 && str.c_str()[0] == '-'))
        return;
    if (check_num(str))
    {
        try
        {
            if ((static_cast<int>(str.c_str()[0]) > 31 && static_cast<int>(str.c_str()[0]) < 127) && str.length() == 1 && !check_num(str))
            {
                std::cout << "int = " << static_cast<int>(str.c_str()[0]) << std::endl;
                return;
            }
            if (str == "f" || str == ".")
                throw Impossible();
        }
        catch (const Impossible& e)
        {
            std::cout << "int = " << e.what() << std::endl;
            return;
        }
        std::cout << "int = " << i << std::endl;
    }
    else
    {
        try
        {
            if ((static_cast<int>(str.c_str()[0]) > 31 && static_cast<int>(str.c_str()[0]) < 127) && str.length() == 1)
            {
                std::cout << "int = " << static_cast<int>(str.c_str()[0]) << std::endl;
                return;
            }
            if (!check_num(str) || str == "f")
                throw Impossible();
        }
        catch (const Impossible& e)
        {
            std::cout << "int = " << e.what() << std::endl;
        }
    }
}

void	ScalarConverte::ConvertF(std::string str)
{
	float f = ft_stof(str);
    std::cout << "________________________________________________________" << std::endl;
    if (((static_cast<int>(str.c_str()[0]) > 31 && static_cast<int>(str.c_str()[0]) < 127) && str.length() == 1 ) || check_num(str))
    {
        try
        {
            if (str == ".")
                throw Not_A_Number();
        }
        catch(const Not_A_Number& e)
        {
            std::cout << "float = " << e.what() << std::endl;
            return;
        }
        if (static_cast<int>(str.c_str()[0]) > 31 && static_cast<int>(str.c_str()[0]) < 127 &&  !check_num(str) && str.length() == 1)
        {
            std::cout << "floatd = " << std::fixed << std::setprecision(ft_precision(str)) << static_cast<float>(str.c_str()[0]) << "f" << std::endl;
        }
        else 
            std::cout << "float = " << std::fixed << std::setprecision(ft_precision(str)) << f << "f" << std::endl;
    }
    else 
    {
        try
        {
            if (!check_num(str) || str == ".")
                throw Not_A_Number();
        }
        catch(const Not_A_Number& e)
        {
            std::cout << "float = " << e.what() << std::endl;
        }
    }
}

void	ScalarConverte::ConvertD(std::string str)
{
	double d = ft_stod(str);
	std::cout << "________________________________________________________" << std::endl;
    if (((static_cast<int>(str.c_str()[0]) > 31 && static_cast<int>(str.c_str()[0]) < 127) && str.length() == 1 ) || check_num(str))
    {
        try
        {
            if (str == ".")
                throw Not_A_Number();
        }
        catch(const Not_A_Number& e)
        {
            std::cout << "double = " << e.what() << std::endl;
            return;
        }
        if (static_cast<int>(str.c_str()[0]) > 31 && static_cast<int>(str.c_str()[0]) < 127 && !check_num(str) && str.length() == 1)
        {
            std::cout << "double = " << std::fixed << std::setprecision(ft_precision(str)) << static_cast<double>(str.c_str()[0]) << std::endl;
        }
        else 
            std::cout << "double = " << std::fixed << std::setprecision(ft_precision(str)) << d << std::endl;
    }
    else 
    {
        try
        {
            if (!check_num(str) || str == ".")
                throw Not_A_Number();
        }
        catch(const Not_A_Number& e)
        {
            std::cout << "double = " << e.what() << std::endl;
        }
        
    }
    std::cout << "________________________________________________________" << std::endl;
}
