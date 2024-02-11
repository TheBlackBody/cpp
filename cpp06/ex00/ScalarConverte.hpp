/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:27:15 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/11 16:56:38 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCALARCONVERTE_HPP
# define SCALARCONVERTE_HPP

# include "./Utils.hpp"

class ScalarConverte
{
	private:
		std::string _str;
		char _c;
		int _i;
		float _f;
		double _d;
	public:
		ScalarConverte(std::string str);
		ScalarConverte(const ScalarConverte &copy);
		~ScalarConverte();
	
		ScalarConverte &operator=(const ScalarConverte &scalar);

		void setC(std::string str);
		void setI(std::string str);
		void setF(std::string str);
		void setD(std::string str);

};

#endif