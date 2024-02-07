/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:29:31 by sfernand          #+#    #+#             */
/*   Updated: 2024/01/23 16:18:49 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "./Form.hpp"

class Form;

class Bureaucrat
{
    protected:
        const std::string _name;
        int         _grade;

    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        ~Bureaucrat();

        Bureaucrat &operator=(const Bureaucrat &bureaucrat);

        std::string getName(void) const;
	
    	int getGrade(void) const;
    	void setGrade(int grade);
		void incrementGrade(void);
		void decrementGrade(void);

        void signForm(Form &form) const;
        
        class GradeTooHightException : public std::exception
        {
            public :
                virtual const char *what() const throw()
                {
                    return "<Bureaucrat> Failed: grade is too high";
                }
        };
        class GradeTooLowException : public std::exception
        {
            public :
                virtual const char *what() const throw()
                {
                    return "<Bureaucrat> Failed: grade is too low";
                }
        };
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat);

#endif