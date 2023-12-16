/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:50:07 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/07 16:40:23 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon& _weapon;

    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();

        void    attack(void) const;
};

#endif