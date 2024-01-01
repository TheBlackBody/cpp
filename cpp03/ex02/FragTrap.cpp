/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:56:22 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/21 15:26:59 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;

    std::cout << "FragTrap : " << this->_name << " : Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "ScavTrap : " << this->_name << " : has been destroyed" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    if (this->_energyPoint <= 0)
    {
        std::cout << "FragTrap : " << this->_name << " : has no energy to attack!" << std::endl;
        return;
    }
    std::cout << "FragTrap : " << this->_name << " : high fives everybody." << std::endl;
    this->_energyPoint -= 1;
}