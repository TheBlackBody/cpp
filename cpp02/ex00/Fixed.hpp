/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 08:26:16 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/14 16:37:16 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int                 _fixed;
        static const int    _bit = 8;

    public:
        Fixed();
        Fixed(Fixed &fixed);
        ~Fixed();

        Fixed   &operator=(Fixed &fixed);
        
        int getRawBits(void) const;
        void    setRawBits(int const raw);

};

#endif