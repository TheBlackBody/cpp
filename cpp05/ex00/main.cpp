/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:28:19 by sfernand          #+#    #+#             */
/*   Updated: 2024/01/31 18:53:37 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

int main(void)
{
        Bureaucrat Sasha("Sasha", 30);
        Bureaucrat Copy(Sasha);
        std::cout << Copy.getName() << std::endl;
        Bureaucrat Guillaume("Guillaume", 150);
        Bureaucrat Raphael("Raphael", 1);
        try
        {
                Bureaucrat Guillaume("Guillaume", 152);
        }
        catch(std::exception const &e)
        {
                std::cout << e.what() << std::endl;
        }

        std::cout << Sasha << std::endl;
        std::cout << Guillaume << std::endl;
        std::cout << Raphael << std::endl;


        Sasha.incrementGrade();
        std::cout << Sasha << std::endl;

        try
        {
                Guillaume.decrementGrade();
        }
        catch(std::exception const &e)
        {
                std::cout << e.what() << std::endl;
        }
        std::cout << Guillaume << std::endl;

        try
        {
                Raphael.incrementGrade();
        }
        catch(std::exception const &e)
        {
                std::cout << e.what() << std::endl;
        }
        std::cout << Raphael << std::endl;

        return (0);
}
