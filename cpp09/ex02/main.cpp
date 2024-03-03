/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 09:52:26 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/26 17:46:15 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    try 
    {
		PmergeMe	sort(argc, argv);
	} catch (std::exception &exception) 
    {
		std::cerr << "Error: " << exception.what() << std::endl;
    }
    return (0);
}