/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:51:53 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/20 18:24:42 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;

    std::cout << "ScavTrap : " << this->_name << " : Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap : " << this->_name << " : has been destroyed" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->_energyPoint <= 0 || this->_hitPoint <= 0)
    {
        std::cout << "ScavTrap : " << this->_name << " : has no energy to attack!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap : " << this->_name << " : attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoint--;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap : " << this->_name << " : is now in Gate keeper mode." << std::endl;
}