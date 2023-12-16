/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:39:52 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/12 18:06:56 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harl;
    std::string level = "";
    level = "DEBUG";
    harl.complain(level);
    level = "INFO";
    harl.complain(level);
    level = "WARNING";
    harl.complain(level);
    level = "ERROR";
    harl.complain(level);
    return (0);
}