/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:28:19 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/05 17:48:09 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
        Bureaucrat Sasha("Sasha", 2);
        Bureaucrat Guillaume("Guillaume", 150);
        ShrubberyCreationForm scform("Tree");
        PresidentialPardonForm ppform("President");
        RobotomyRequestForm rrform("Robotomy");
        std::cout << std::endl;
        std::cout << "----------------------------" << std::endl;
        Sasha.executeForm(scform);
        Sasha.signForm(scform);
        Sasha.executeForm(scform);
        Guillaume.executeForm(scform);
        std::cout << std::endl;
        std::cout << "----------------------------" << std::endl;
        Sasha.executeForm(ppform);
        Sasha.signForm(ppform);
        Sasha.executeForm(ppform);
        Guillaume.executeForm(ppform);
        std::cout << std::endl;
        std::cout << "----------------------------" << std::endl;
        Sasha.executeForm(rrform);
        Sasha.signForm(rrform);
        Sasha.executeForm(rrform);
        Guillaume.executeForm(rrform);
        std::cout << std::endl;
        std::cout << "----------------------------" << std::endl;

        return (0);
}