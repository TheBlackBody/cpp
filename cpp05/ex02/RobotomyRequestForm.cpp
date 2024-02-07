/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:40:16 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/05 17:57:59 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45)
{
    std::cout << "[RobotomyRequestForm] Default constructor called" << std::endl;
    this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy)
{
    std::cout << "[RobotomyRequestForm] Copy constructor called" << std::endl;
    *this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "[RobotomyRequestForm] Destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getGradeExecute())
        throw Form::GradeTooLowException();
    if (!this->getIsSigned())
        throw Form::NotSignedException();
    std::cout << "... Drilling noises ..." << std::endl;
    srand (time(NULL));
    int nb = rand() % 100;
    if (nb)
        std::cout << this->getTarget() << " has been robotomized successfully " << nb << "% of the time." << std::endl;
    else
        std::cout << "The robotomy failed" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &base)
{
	if (this != &base)
	{
		this->setIsSigned(base.getIsSigned());
		this->setTarget(base.getTarget());
	}
	return (*this);
}