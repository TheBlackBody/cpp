/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:39:15 by sfernand          #+#    #+#             */
/*   Updated: 2024/01/08 17:53:22 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Replace::Replace()
{
    
}

Replace::~Replace()
{
    
}


std::string    Replace::replace(std::string content, std::string s1, std::string s2)
{
    if (s1.empty())
        return (content);
    if (s1 == s2)
        return (content);
    size_t  index = content.find(s1);
    while(index != std::string::npos && s1.length() > index)
    {
        content.erase(index, s1.size());
        content.insert(index, s2);
        std::cout << index << std::endl;
        index = content.find(s1, index + 1);
    }
    return (content);
}