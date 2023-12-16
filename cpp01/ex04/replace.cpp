/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:39:15 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/12 16:38:11 by sfernand         ###   ########.fr       */
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
    size_t  index = content.find(s1);
    while(index != std::string::npos)
    {
        content.erase(index, s1.size());
        content.insert(index, s2);
        index = content.find(s1);
    }
    return (content);
}