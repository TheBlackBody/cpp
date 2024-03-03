/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:25:23 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/21 20:10:41 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BICOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# define INT_MAX  2147483647

# include <map>
# include <fstream>
# include <iostream>
# include <string>
# include <algorithm>
# include <stdexcept>
# include <sstream> 

class BitcoinExchange
{
    private :
        std::map<std::string, std::string> _data;
        std::string trim(const std::string& str);

        bool parce_file(char* file_path);
        bool valid_Date(std::string date);
        void valid_Value(const std::string &str);
        std::string previousDate(const std::string& date);
        double ft_stod(std::string str);
        int ft_stoi(std::string str);
        std::string convertIntToString(int nombre);
        bool check_num(std::string& str);

    public :
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &copy);
        ~BitcoinExchange();

        BitcoinExchange &operator=(const BitcoinExchange &btc);

        void run(char* path_file);
        
        class Out_OF_Range : public std::exception
        {
            public :
            virtual const char *what() const throw()
            {
                return "Out of int range";
            }
        };
};

#endif