/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:07:57 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/29 11:38:35 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *_brainDog;
    public:
        Dog();
        Dog(const Dog &copy);
        ~Dog();

        Dog &operator=(const Dog &dog);

        void makeSound() const;
};

#endif