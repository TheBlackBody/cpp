/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:07:10 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/20 18:26:32 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "ClapTrap : " << this->_name << " : Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "ClapTrap : " << this->_name << " : Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap : " << this->_name << " : has been destroyed" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoint <= 0 || this->_hitPoint <= 0)
    {
        std::cout << "ClapTrap : " << this->_name << " : has no energy to attack!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap : " << this->_name << " : attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoint--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoint <= amount)
    {
        this->_hitPoint = 0;
        std::cout << "ClapTrap : " << this->_name << " : has no hitpoints left!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap : " << this->_name << " : takes " << amount << " points of damage!" << std::endl;
    this->_hitPoint -= amount;
}


void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoint <= 0 || this->_hitPoint <= 0)
    {
        std::cout << "ClapTrap : " << this->_name << " : has no energy or hitpoints to repair!" << std::endl;
        return ;
    }
    if (this->_hitPoint + amount > 10)
    {
        std::cout << "ClapTrap : " << this->_name << " : has max hitpoints!" << std::endl;
        this->_hitPoint = 10;
        return ;
    }
    std::cout << "ClapTrap : " << this->_name << " : is repaired by " << amount << " points!" << std::endl;
    this->_hitPoint += amount;
    this->_energyPoint -= 1;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hitPoint = other._hitPoint;
        _energyPoint = other._energyPoint;
        _attackDamage = other._attackDamage;
    }
    return *this;
}