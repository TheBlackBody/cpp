/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:05:22 by sfernand          #+#    #+#             */
/*   Updated: 2024/01/17 13:35:15 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound();
    j->makeSound();
    
    meta->makeSound();

    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal *l = new WrongCat();

    std::cout << wrong->getType() << " " << std::endl;
    std::cout << l->getType() << " " << std::endl;

    wrong->makeSound();
    l->makeSound();
    
    std::cout << "=======================================" << std::endl;

    Dog basic;
    {
        Dog tmp = basic;
    }

    Cat basics;
    {
        Cat tmp = basics;
    }


    std::cout << "=======================================" << std::endl;
    delete wrong;
    delete l;

    delete meta;
    delete i;
    delete j;
    return (0);
}