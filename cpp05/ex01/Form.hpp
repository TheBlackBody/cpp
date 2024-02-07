/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:28:37 by sfernand          #+#    #+#             */
/*   Updated: 2024/01/23 16:26:51 by sfernand         ###   ########.fr       */
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

    public :
        Form(std::string name, int gradeSigned, int gradeExecute);
        Form(const Form &copy);
        ~Form();

        Form &operator=(const Form &form);

        std::string getName() const;
        bool getIsSigned() const;
        int getGradeSigned() const;
        int getGradeExecute() const;

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

};

std::ostream &operator<<(std::ostream &o, const Form &form);

#endif