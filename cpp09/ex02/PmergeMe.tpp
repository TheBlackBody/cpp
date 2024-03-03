/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:13:16 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/26 17:43:31 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_TPP
# define PMERGEME_TPP

template <class T> void PmergeMe::_sort(T &container, T &leftHalf, T &rightHalf)
{
	class T::iterator leftIt = leftHalf.begin();
	class T::iterator rightIt = rightHalf.begin();

	while (leftIt != leftHalf.end() && rightIt != rightHalf.end())
    {
		if (*leftIt < *rightIt)
        {
			container.push_back(*leftIt);
			leftIt++;
		} else
        {
			container.push_back(*rightIt);
			rightIt++;  
		}
	}
	while (leftIt != leftHalf.end())
    {
		container.push_back(*leftIt);
		leftIt++;
	}
	while (rightIt != rightHalf.end())
    {
		container.push_back(*rightIt);
		rightIt++;
	}
}

template <class T> void	PmergeMe::_divideAndSort(T &container)
{
	if (container.size() <= 1)
		return ;
	class T::iterator	median = container.begin();

	std::advance(median, container.size() / 2);
	T	leftHalf(container.begin(), median);
	T	rightHalf(median, container.end());

	_divideAndSort(leftHalf);
	_divideAndSort(rightHalf);

	container.clear();
	_sort(container, leftHalf, rightHalf);
}

template <class T> double	PmergeMe::_run(T &container)
{
	PmergeMe	object;
	double		processTime;

	clock_t	start = clock();
	object._divideAndSort(container);
	clock_t	end = clock();

	processTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
	return (processTime);
}

template <class T> void	PmergeMe::_printValue(std::string prefix, T &container)
{
	std::cout << prefix;
	for (class T::const_iterator it = container.begin(); it != container.end(); ++it)
    {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

template <class T> bool	PmergeMe::_isSorted(T &container)
{
	class T::const_iterator	prev = container.begin();

	for (class T::const_iterator it = container.begin(); it != container.end(); ++it)
    {
		if (*prev > *it)
			return (false);
	}
	return (true);
}

#endif