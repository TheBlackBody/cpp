/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:35:31 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/29 12:03:07 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *_brainCat;
    public:
        Cat();
        Cat(const Cat &copy);
        ~Cat();

        Cat &operator=(const Cat &cat);

        void makeSound() const;
};

#endif