/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:06:35 by sfernand          #+#    #+#             */
/*   Updated: 2024/01/12 10:37:52 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap claptrap1;
    ClapTrap claptrap2("elena");
    ClapTrap claptrap3(claptrap2);
    ClapTrap claptrap4("Floki");

    claptrap1.attack("Blob");
    claptrap2.takeDamage(50);
    claptrap2.beRepaired(10);

    claptrap2.attack("piou");
    claptrap4.takeDamage(5);
    claptrap4.beRepaired(1000);
    claptrap4.takeDamage(1000);
    claptrap4.beRepaired(1000);
    return 0;
}