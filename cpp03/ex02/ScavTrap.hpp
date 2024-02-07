/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:51:50 by sfernand          #+#    #+#             */
/*   Updated: 2024/01/12 10:41:54 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap( std::string name );
        ScavTrap(const ScavTrap& copy);
        ~ScavTrap();

        void    attack(std::string const& target);
        void    guardGate();

        ScavTrap& operator=(const ScavTrap& other);
};

#endif