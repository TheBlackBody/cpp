/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:39:30 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/12 16:13:05 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <cstring>

class Replace
{
private:
    
public:
    Replace();
    ~Replace();
    std::string    replace(std::string content, std::string s1, std::string s2);
};

#endif