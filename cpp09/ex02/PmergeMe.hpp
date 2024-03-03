/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:54:50 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/26 17:35:06 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <iomanip>
# include <algorithm>
# include <deque>
# include <vector>
# include <ctime>
# include <cstring>

class PmergeMe {

	private:
		PmergeMe(void);

		bool	_isExpressionValid(int argc, char **argv);
		template <class T> void		_sort(T &container, T &leftHalf, T &rightHalf);
		template <class T> void		_divideAndSort(T &container);
		template <class T> void		_printValue(std::string prefix, T &container);
		template <class T> double	_run(T &container);
		template <class T> bool		_isSorted(T &container);

		PmergeMe	&operator=(const PmergeMe &origin);

	public:
		PmergeMe(int argc, char **argv);
		PmergeMe(const PmergeMe &origin);
		~PmergeMe(void);

        class NotEnoughArgsException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "You should put 2 number to sort";
                }
        };

        class InvalidNumbersException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "You should only put a positive number";
                }
        };
};

# include "PmergeMe.tpp"

#endif