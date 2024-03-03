/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:21:06 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/13 15:30:24 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "Data.hpp"
# include <iostream>
# include <stdint.h>

class Serializer
{
  private:
	Serializer();
	Serializer(const Serializer &serializer);

  public:
	~Serializer();
	Serializer &operator=(Serializer const &rhs);
	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);
};

#endif