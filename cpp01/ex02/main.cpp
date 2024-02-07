/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:34:42 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/11 16:05:50 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stingPTR = &str;
    std::string &stringREF = str;
    
    std::cout << str << " = " << &str << std::endl;
    std::cout << *stingPTR << " = " << &stingPTR <<std::endl;
    std::cout << stringREF << " = " << &stringREF <<std::endl;
}
