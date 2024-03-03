/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:01:03 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/14 16:06:07 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <string>
# include <iostream>

template <typename T>
void swap(T & first, T & sec)
{
    T tres = first;
    first = sec;
    sec = tres;
}

template <typename T>
T const min(T const &first, T const &sec)
{
    return (first<=sec ? first : sec);
}

template <typename T>
T const max(T const &first, T const &sec)
{
    return (first>=sec ? first : sec);
}

#endif