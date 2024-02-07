/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:28:19 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/05 19:03:53 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
        Bureaucrat Me("Me", 2);
	Intern someRandomIntern;
	Form* a;
	Form* b;
	Form* c;
	Form* d;
	a = someRandomIntern.makeForm("shrubbery creation", "Shru");
	Me.signForm(*a);
	Me.executeForm(*a);
	std::cout << "----------------------------" << std::endl;
	b = someRandomIntern.makeForm("robotomy request", "Sobo");
	Me.signForm(*b);
	Me.executeForm(*b);
	std::cout << "----------------------------" << std::endl;
	c = someRandomIntern.makeForm("presidential pardon", "Pres");
	Me.signForm(*c);
	Me.executeForm(*c);
	std::cout << "----------------------------" << std::endl;
	d = someRandomIntern.makeForm("peter parker", "Peter");
        std::cout << "ta grand mère la pute" << std::endl;
	Me.signForm(*d);
        std::cout << "ta grand mère la pute" << std::endl;
	Me.executeForm(*d);
        std::cout << "ta grand mère la pute" << std::endl;

	delete a;
	delete b;
	delete c;
        delete d;

	return (0);
}