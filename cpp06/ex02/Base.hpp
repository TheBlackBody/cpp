/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:36:04 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/20 10:01:00 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <iostream>
# include <string>
# include <fstream>
# include <math.h>
# include <cmath>
# include <climits>
# include <iomanip>
# include <cerrno>
# include <sstream>

class Base
{
  public:
	virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
Base *make_a();
Base *make_b();
Base *make_c();

#endif