/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:57:35 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/07 03:49:02 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie(std::string name);
        ~Zombie();
        Zombie* newZombie(std::string name);
        void    randomChump(std::string name);
        void    anoncement(std::string name);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);
void    anoncement(std::string name);

#endif