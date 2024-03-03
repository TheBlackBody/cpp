/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:23:28 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/13 15:34:12 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"

int	main(void)
{
	Data		*data;
	uintptr_t	u_ptr;
	Data		*d_ptr;

	data = new Data;
	data->value = 2;
	data->text = "Sasha";
	u_ptr = Serializer::serialize(data);
	d_ptr = Serializer::deserialize(u_ptr);
	std::cout << "value => " << d_ptr->value << std::endl;
    std::cout << "text => " << d_ptr->text << std::endl;
	delete (data);
	return (0);
}