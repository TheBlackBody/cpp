/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:29:07 by sfernand          #+#    #+#             */
/*   Updated: 2024/01/23 16:17:11 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHightException();
    else if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "[Bureaucrat] " << this->_name << " deffault constructor has been called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    if (copy.getGrade() < 1)
        throw Bureaucrat::GradeTooHightException();
    else if (copy.getGrade() > 150)
        throw Bureaucrat:: GradeTooLowException();
    *this = copy;
    std::cout << "[Bureaucrat] " << this->_name << " copy constructor has been called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::setGrade(int newGrade)
{
    this->_grade = newGrade;
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHightException();
    else
        this->setGrade(this->_grade - 1);
}

void Bureaucrat::decrementGrade()
{
    if(this->_grade + 1 > 1)
        throw Bureaucrat::GradeTooLowException();
    else
        this->setGrade(this->_grade + 1);
}

void Bureaucrat::signForm(Form &form) const
{
    try
    {
        if (!form.beSigned(*this))
            return ;
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch (Form::GradeTooLowException &exep)
    {
        std::cout << this->_name << " couldn't sign " << form.getName() << " because his grade is too low" << std::endl;
    }
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
    std::cout << "operator assignement called" << std::endl;
    if (this != &bureaucrat)
        this->_grade = bureaucrat._grade;
    return (*this);
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat)
{
        std::cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
        return (o);
}
