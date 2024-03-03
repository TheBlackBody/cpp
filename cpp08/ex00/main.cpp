/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:29:18 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/19 11:37:06 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> vector;

    vector.push_back(10);
    vector.push_back(42);
    vector.push_back(3);
    vector.push_back(500);

    int i;

    std::cin >> i;
    try 
    {
        std::cout << "Num " << i << " : "  << *easyfind(vector, i) << " is on this vector." << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}