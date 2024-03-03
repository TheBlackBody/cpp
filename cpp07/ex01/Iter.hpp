/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:22:50 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/15 13:32:36 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>

template<typename T>
void iter(T *array, size_t len, void (*f)(T const &))
{
    for (size_t i = 0; i < len; i++)
    {
        f(array[i]);
    }
}

#endif