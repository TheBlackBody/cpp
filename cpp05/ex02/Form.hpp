/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:28:37 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/05 14:32:14 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "./Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    protected :
        std::string _name;
        bool _isSigned;
        int _gradeSigned;
        int _gradeExecute;
        std::string _target;

    public :
        Form(std::string name, int gradeSigned, int gradeExecute);
        Form(const Form &copy);
        virtual ~Form();

        Form &operator=(const Form &form);

        std::string getName() const;
        bool getIsSigned() const;
        int getGradeSigned() const;
        int getGradeExecute() const;

        std::string getTarget() const;
        void setIsSigned(bool var);
        void setTarget(std::string target);

        bool beSigned(Bureaucrat const &bureaucrat);

        class GradeTooHightException : public std::exception
        {
            public :
                virtual const char *what() const throw()
                {
                    return "<Form> Failed: grade is too high";
                }
        };
        class GradeTooLowException : public std::exception
        {
            public :
                virtual const char *what() const throw()
                {
                    return "<Form> Failed: grade is too low";
                }
        }; 
        class NotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "<Form> this form is not signed";
                }
        };
    virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &o, const Form &form);

#endif