/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:23:48 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/19 17:34:48 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# define INT_MIN -2147483648
# define INT_MAX 2147483647

# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
    private :
        std::vector<int> _data;
        unsigned int _N;
        Span();
    
    public : 
        Span(unsigned int N);
        Span(const Span &copy);
        ~Span();

        Span &operator=(const Span &span);

        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
};

#endif