/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:57:31 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/15 14:43:12 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " has been destroy" << std::endl;
}

void    anoncement(std::string name)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}