/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 02:36:09 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/18 14:31:11 by sfernand         ###   ########.fr       */
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

        bool    operator>(const Fixed &fixed) const;
        bool    operator<(const Fixed &fixed) const;
        bool    operator>=(const Fixed &fixed) const;
        bool    operator<=(const Fixed &fixed) const;
        bool    operator==(const Fixed &fixed) const;
        bool    operator!=(const Fixed &fixed) const;

        Fixed   operator+(const Fixed &fixed) const;
        Fixed   operator-(const Fixed &fixed) const;
        Fixed   operator*(const Fixed &fixed) const;
        Fixed   operator/(const Fixed &fixed) const;

        Fixed&  operator++(void);//before
        Fixed&  operator--(void);//before
        Fixed   operator++(int);//after
        Fixed   operator--(int);//after

        static Fixed&  min(Fixed &a, Fixed &b);
        static Fixed&  max(Fixed &a, Fixed &b);
        static const Fixed&  min(const Fixed &a, const Fixed &b);
        static const Fixed&  max(const Fixed &a, const Fixed &b);
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif