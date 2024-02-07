/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:09:36 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/05 18:46:48 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "[Intern] Default constructor called" << std::endl;
}

Intern::Intern(const Intern &copy)
{
    std::cout << "[Intern] Copy constructor called" << std::endl;
    *this = copy;
}

Intern::~Intern()
{
    std::cout << "[Intern] Destructor called";
}

Form *Intern::makeForm(const std::string name, const std::string target)
{
    const std::string allForms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form *allCreations[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
    try
    {
        for (int i = 0; i < 3; i++)
        {
            if (!allForms[i].compare(name))
            {
                std::cout << "[Intern] creates " << name << " form"<< std::endl;
				return (allCreations[i]);
            }
        }
        throw Intern::InvalidFormException();
    }
    catch(Intern::InvalidFormException& e)
    {
        std::cout << e.what() << std::endl;
    }
    return (NULL);
}

Intern &Intern::operator=(const Intern &intern)
{
    (void)intern;
    return(*this);
}