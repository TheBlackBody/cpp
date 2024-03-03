/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:11:47 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/20 14:19:22 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <list>
# include <deque>
# include <iostream>
# include <string>

template <typename T>
class MutantStack : public std::stack<T>
{
    public: 
        MutantStack();
        MutantStack(const MutantStack &copy);
        ~MutantStack();

        MutantStack &operator=(const MutantStack &stack);

        typedef typename std::deque<T>::iterator iterator;
        iterator begin();
        iterator end();
};

# include "./MutantStack.tpp"

#endif