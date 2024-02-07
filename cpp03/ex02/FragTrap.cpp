/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:56:22 by sfernand          #+#    #+#             */
/*   Updated: 2024/01/12 10:41:27 by sfernand         ###   ########.fr       */
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

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(*this)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = copy;
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

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hitPoint = other._hitPoint;
        _energyPoint = other._energyPoint;
        _attackDamage = other._attackDamage;
    }
    return *this;
}