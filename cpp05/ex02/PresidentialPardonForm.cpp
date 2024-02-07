/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:41:06 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/05 14:39:00 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
    std::cout << "[PresidentialPardonForm] Default constructor called" << std::endl;
    this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy)
{
    std::cout << "[PresidentialPardonForm] Copy constructor called" << std::endl;
    *this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "[PresidentialPardonForm] Destructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getGradeExecute())
        throw Form::GradeTooLowException();
    if (!this->getIsSigned())
        throw Form::NotSignedException();
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &pres)
{
    if (this != &pres)
    {
        this->setIsSigned(pres.getIsSigned());
        this->setTarget(pres.getTarget());
    }
    return (*this);
}
