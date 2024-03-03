/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:55:07 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/26 17:34:01 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
    
}

PmergeMe::PmergeMe(const PmergeMe &origin)
{
	*this = origin;
}

PmergeMe::~PmergeMe(void)
{
    
}

PmergeMe::PmergeMe(int argc, char **argv) {
	std::deque<int>		deque;
	std::vector<int>	vect;
	double	vectProcessTime;
	double	dequeProcessTime;

	if (argc < 3)
		throw PmergeMe::NotEnoughArgsException();
	if (!_isExpressionValid(argc, argv))
		throw PmergeMe::InvalidNumbersException();
	for (int i = 1; i < argc; i++) {
		int	extractedNum = std::atoi(argv[i]);

		deque.push_back(extractedNum);
		vect.push_back(extractedNum);
	}
	_printValue( "Before: " , vect);
	vectProcessTime = _run(vect);
	dequeProcessTime = _run(deque);
	_printValue( "After: " , vect);
	std::cout << "Time to process a range of " << vect.size() << " elements with std::vector : " << std::fixed << std::setprecision(5) << vectProcessTime << " us" << std::endl;
	std::cout << "Time to process a range of " << vect.size() << " elements with std::deque : " << std::fixed << std::setprecision(5) << dequeProcessTime << " us" << std::endl;
}

bool	PmergeMe::_isExpressionValid(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
    {
		for (size_t j = 0; j < std::strlen(argv[i]); j++)
        {
			if (!std::isdigit(argv[i][j]))
				return (false);
		}
		int	extractedNum = std::atoi(argv[i]);
		if (extractedNum <= 0)
			return (false);
	}
	return (true);
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &origin)
{
	(void) origin;
	return (*this);
}
