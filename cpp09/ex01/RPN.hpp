/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:14:03 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/22 13:41:04 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <iostream>
# include <string>
# include <sstream>
# include <exception>
# include <cstdlib>

class RPN
{
    public :
        RPN();
        RPN(const RPN &copy);
        RPN &operator=(const RPN &other);
        ~RPN();

        int calculate(std::string str);

        class error : public std::exception 
        {
            public :
                virtual const char *what() const throw()
                {
                    return "Error ";
                }
        };
};

#endif