/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:18:43 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/04 17:15:10 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBREARBLE FEEDBACK NOISR *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string str = std::string(argv[i]);
			for (size_t len = 0; len < str.size(); len++)
				std::cout << (char)std::toupper(str[len]);
		}
		std::cout << std::endl;
	}
	return (0);
}