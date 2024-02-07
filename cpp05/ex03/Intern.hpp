/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:09:12 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/05 18:54:21 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern &base);
        ~Intern();

        Intern &operator=(const Intern &intern);

        Form *makeForm(const std::string name, const std::string target);
        
        class InvalidFormException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "This form doesn't exist";
                }
        };
};

#endif