/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 02:36:09 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/16 03:25:35 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int                 _fixed;
        static const int    _bit = 8;

    public:
        Fixed( void );
        Fixed( const int n );
        Fixed( const float n );
        Fixed( const Fixed &fixed );
        Fixed& operator=( const Fixed &fixed );
        ~Fixed();
        
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif