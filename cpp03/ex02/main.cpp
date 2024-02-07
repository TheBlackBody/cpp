/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:06:35 by sfernand          #+#    #+#             */
/*   Updated: 2024/01/12 10:39:16 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap claptrap1;
    ClapTrap claptrap2("elena");
    ClapTrap claptrap3(claptrap2);
    ClapTrap claptrap4("phynicia");

    claptrap1.attack("elena");
    claptrap2.takeDamage(100000000);
    claptrap2.beRepaired(10);

    claptrap2.attack("phynicia");
    claptrap4.takeDamage(5);
    claptrap4.beRepaired(1000);
    claptrap4.takeDamage(1000);
    claptrap4.beRepaired(1000);

    ScavTrap scavtrap1;
    ScavTrap guigui("GuiGui");
    ScavTrap guigui2(guigui);

    guigui.attack("pika");
    guigui.takeDamage(10);
    guigui.beRepaired(10);
    guigui.guardGate();

    FragTrap sasha("sasha");
    FragTrap sasha2(sasha);
    sasha.takeDamage(5);
    sasha.beRepaired(5);
    sasha.highFivesGuys();
    return 0;
}
