/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 10:20:05 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/29 11:47:09 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "Animal.hpp"

class Brain
{
    private:
        std::string _ideas[100];

    public:
        Brain();
        Brain(const Brain &brain);
        ~Brain();

        Brain &operator=(const Brain &brain);
};

#endif