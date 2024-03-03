/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:27:15 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/13 10:02:31 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCALARCONVERTE_HPP
# define SCALARCONVERTE_HPP

# include "./Utils.hpp"

class ScalarConverte
{
	private:
		ScalarConverte();
		ScalarConverte(const ScalarConverte &copy);
		ScalarConverte &operator=(const ScalarConverte &scalar);
		
	public:
		~ScalarConverte();

		static void Convert(std::string str);
		static void ConvertC(std::string str);
		static void ConvertI(std::string str);
		static void ConvertF(std::string str);
		static void ConvertD(std::string str);
};

#endif