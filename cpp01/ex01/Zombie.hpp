/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 03:57:49 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/07 14:09:48 by sfernand         ###   ########.fr       */
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
        Zombie();
        ~Zombie();
        Zombie* zombieHorde( int N, std::string name );
        void initName(std::string name);
        void anoncement(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif