/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:21:44 by sfernand          #+#    #+#             */
/*   Updated: 2024/03/01 15:46:26 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Span.hpp"

int main()
{
    unsigned int i;

    std::cout << "How many number on data : ";
    std::cin >> i;
    Span span(i);
    try 
    {
        int n;
        std::cout << "What is the first number : ";
        std::cin >> n;
        span.addNumber(n);
        span.addNumber(50);
        span.addNumber(66);
        span.addNumber(-5);
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span: " << span.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "-----------Copy-----------" << std::endl;

    Span copy_span(span);
    std::cout << "Shortest span: " << copy_span.shortestSpan() << std::endl;
	std::cout << "Longest span: " << copy_span.longestSpan() << std::endl;
    
    std::cout << "-----------Auto iterator-----------" << std::endl;

    int range;

    std::cout << "What is the range : ";
    std::cin >> range;
    Span auto_span(range);
    int value;
    std::cout << "What is the first value : ";
    std::cin >> value;
    try
    {
        for (int i = 0; i != range; i++)
        {
            auto_span.addNumber(value);
            value++;
        }
        std::cout << "Shortest span: " << auto_span.shortestSpan() << std::endl;
	    std::cout << "Longest span: " << auto_span.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}