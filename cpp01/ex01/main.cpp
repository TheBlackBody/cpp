/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 03:57:39 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/07 14:09:30 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string name = "";
    std::cout << "please enter zombie name :";
    std::cin >> name;
    Zombie *zombi = zombieHorde(4, name);
    for (size_t i = 0; i < 4; i++) 
    {
        zombi[i].anoncement(name);
    }
    delete[] zombi;
    return (0);
}