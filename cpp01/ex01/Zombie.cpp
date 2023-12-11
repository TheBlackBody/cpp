/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 03:57:46 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/07 14:07:14 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    
}

Zombie::~Zombie()
{
    std::cout << this->_name << " has been destroy" << std::endl;
}

void Zombie::initName(std::string name)
{
    this->_name = name;
}

void    Zombie::anoncement(std::string name)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}