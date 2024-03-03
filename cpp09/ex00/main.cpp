/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:53:10 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/21 17:52:11 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Please enter ./btc <path_file>" << std::endl;
        return(0);
    }

    BitcoinExchange btc;
    btc.run(av[1]);
    return (0);
}