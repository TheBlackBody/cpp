/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:21:11 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/13 15:31:15 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer &serializer)
{
	*this = serializer;
}

Serializer::~Serializer()
{
}

Serializer &Serializer::operator=(const Serializer &rhs)
{
	if (this != &rhs)
	{
	}
	return (*this);
}

uintptr_t Serializer::serialize(Data *ptr)
{
	uintptr_t new_ptr = reinterpret_cast<uintptr_t>(ptr);
	return (new_ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
	Data	*ptr;

	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}