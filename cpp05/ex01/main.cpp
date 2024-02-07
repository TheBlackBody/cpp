/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:28:19 by sfernand          #+#    #+#             */
/*   Updated: 2024/01/23 15:53:34 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
        Bureaucrat Sasha("Sasha", 30);
        Bureaucrat Guillaume("Guillaume", 150);
        Form f1("Form1", 50, 2);
        Form f2("Form2", 1, 1);
        try
        {
                Form f3("Form3", 50, 300);
        }
        catch(std::exception const &exep)
        {
                std::cout << exep.what() << std::endl;
        }
        std::cout << f1 << std::endl;
        std::cout << "----------------------------" << std::endl;
        Sasha.signForm(f1);
        std::cout << f1 << std::endl;
        std::cout << "----------------------------" << std::endl;
        Guillaume.signForm(f1);
        std::cout << "----------------------------" << std::endl;
        Sasha.signForm(f2);
        std::cout << f2 << std::endl;
        std::cout << "----------------------------" << std::endl;

        return (0);
}