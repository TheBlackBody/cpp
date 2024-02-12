/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:41:38 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/12 16:53:24 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# define INT_MAX 2147483647
# define INT_MIN -2147483648

# include <string>
# include <iostream>
# include <iomanip>

class Out_OF_Range : public std::exception
{
    public :
        virtual const char *what() const throw()
        {
            return "Out of int range";
        }
};

class Non_Displayable : public std::exception
{
    public :
        virtual const char *what() const throw()
        {
        	return "Non displayable";
    	}
};

class Impossible : public std::exception
{
	public :
		virtual const char *what() const throw()
		{
    		return "Impossible";
		}
};

class Not_A_Number : public std::exception
{
	public :
		virtual const char *what() const throw()
		{
    		return "nan";
		}
};

int ft_stoi(std::string str);
float ft_stof(std::string str);
double ft_stod(std::string str);
bool    check_num(std::string& str);
int ft_precision(std::string str);

#endif