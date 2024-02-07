/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:28:32 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/03 13:31:17 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Form.hpp"

Form::Form(std::string name, int gradeSigned, int gradeExecute) : _name(name), _isSigned(false), _gradeSigned(gradeSigned),  _gradeExecute(gradeExecute)
{
    if (this->_gradeSigned < 1 || this->_gradeExecute < 1)
        throw Form::GradeTooHightException();
    else if (this->_gradeSigned > 150 || this->_gradeExecute > 150)
        throw Form::GradeTooLowException();
    std::cout << "[Form] Default constructor called" << std::endl;
}

Form::Form(const Form &copy) : _name(copy.getName()), _isSigned(copy.getIsSigned()), _gradeSigned(copy.getGradeSigned()), _gradeExecute(copy.getGradeExecute())
{
    *this = copy;
    std::cout << "<Form> Copy constructor called" << std::endl;
}

Form::~Form(void)
{
        std::cout << "<Form> Destructor called" << std::endl;
}

Form &Form::operator=(const Form &form)
{
        std::cout << "<Form> Copy assignment operator called" << std::endl;
        if (this != &form)
                this->_isSigned = form._isSigned;
        return (*this);
}

std::string Form::getName(void) const
{
        return (this->_name);
}

bool Form::getIsSigned(void) const
{
        return (this->_isSigned);
}

int Form::getGradeSigned(void) const
{
        return (this->_gradeSigned);
}
int Form::getGradeExecute(void) const
{
        return (this->_gradeExecute);
}

std::string Form::getTarget() const
{
        return (this->_target);
}

void Form::setIsSigned(bool var)
{
        this->_isSigned = var;
}

void Form::setTarget(std::string target)
{
        this->_target = target;
}

bool Form::beSigned(Bureaucrat const &bureaucrat)
{
    if (this->_isSigned)
    {
        std::cout << this->_name << " is already signed" << std::endl;
        return (false);
    }
    if (bureaucrat.getGrade() > this->_gradeSigned)
        throw Form::GradeTooLowException();
    this->_isSigned = true;
    return (true);
}

std::ostream &operator<<(std::ostream &o, const Form &form)
{
        std::cout << form.getName() << ":" << std::endl;
        std::cout << "-> Grade required to sign: " << form.getGradeSigned() << std::endl;
        std::cout << "-> Grade required to execute: " << form.getGradeExecute() << std::endl;
        std::cout << "-> Form signed ? ";
        if (form.getIsSigned())
                std::cout << "Yes";
        else
                std::cout << "Not yet";
        return (o);
}

