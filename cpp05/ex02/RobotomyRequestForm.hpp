/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:40:03 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/05 17:23:20 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "./Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        ~RobotomyRequestForm();

        RobotomyRequestForm &operator=(const RobotomyRequestForm &robotomy);

        void execute(Bureaucrat const &executor) const;
};

#endif