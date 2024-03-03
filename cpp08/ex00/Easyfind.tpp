/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:28:45 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/19 11:29:03 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include "./Easyfind.hpp"

template<typename T>
typename T::iterator easyfind(T& container, int i)
{
    typename T::iterator it = std::find(container.begin(), container.end(), i);
    if (it == container.end())
		  throw std::out_of_range("was not found within the container.");
    return (it);
}

#endif