/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:22:45 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/15 13:35:25 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void print_multiply(int const &i)
{
  std::cout << i * 2 << std::endl;
}

void print(std::string const &str)
{
  std::cout << str << std::endl;
}

int main() {
  int array[] = {1, 2, 3, 4, 5};
  ::iter(array, 5, print_multiply);
  std::string array1[] = {"Coucou", "Salut", "Bonjour"};
  ::iter(array1, 3, print);
  return 0;
}