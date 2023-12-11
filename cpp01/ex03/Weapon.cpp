/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:49:59 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/07 16:36:27 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->setType(type);
}

Weapon::~Weapon()
{
    
}

const  std::string& Weapon::getType( void )
{
    return this->_type;
}

void    Weapon::setType( std::string newType )
{
    this->_type = newType;
}
