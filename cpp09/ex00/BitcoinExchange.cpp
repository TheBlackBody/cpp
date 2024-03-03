/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:59:36 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/21 17:55:15 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::ifstream file_ref("data.csv");
    std::string line;

    while (std::getline(file_ref, line))
    {
        size_t separator = line.find(',');

        std::string date_value = trim(line.substr(0, separator));
        std::string btc_value = trim(line.substr(separator + 1, line.length()));
        this->_data[date_value] = btc_value;
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
    *this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
    {
       this->_data = other._data;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
    
}

void BitcoinExchange::run(char* file_path)
{
    std::ifstream file(file_path);
    std::string line;
    if (parce_file(file_path) == false)
        exit(EXIT_FAILURE);
    std::getline(file, line);
    if (line != "date | value")
        exit(EXIT_FAILURE);

    while (std::getline(file, line))
    {
        size_t separator = line.find('|');
        if (separator == std::string::npos)
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        std::string date = trim(line.substr(0, separator));
        std::string value = trim(line.substr(separator + 1, line.length()));
        try {
            if (!valid_Date(date))
                throw std::invalid_argument("invalid date: " + (date.empty() ? "\"\"" : "'" + date + "'"));

            if(value.empty())
                throw std::invalid_argument("invalid value: " + (value.empty() ? "\"\"" : "'" + value + "'"));

            valid_Value(value);

            std::map<std::string, std::string>::iterator it;
            std::string prev_Date = date;
            it = this->_data.find(date);

            while (it == this->_data.end()) 
            {
                const std::string& current_Date = prev_Date;
                prev_Date = previousDate(current_Date);
                it = this->_data.find(prev_Date);
            }

            std::cout << date << " => " << value  << " = " << ft_stod(it->second) * ft_stod(value) << std::endl;

        } catch (std::exception &e) {
            std::cout << "Error: " << e.what() << std::endl;
        }

    }

    file.close();
}

std::string BitcoinExchange::previousDate(const std::string& date)
{
    int year = ft_stoi(date.substr(0, 4));
    int month = ft_stoi(date.substr(5, 2));
    int day = ft_stoi(date.substr(8, 2));

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        daysInMonth[2] = 29; // February has 29 days in a leap year
    day--;

    if (day == 0) 
    {
        month--;
        if (month == 0)
        {
            month = 12;
            year--;
        }

        day = daysInMonth[month];
    }

    std::string new_Year = convertIntToString(year);
    std::string new_Month = (month < 10) ? "0" + convertIntToString(month) : convertIntToString(month);
    std::string new_Day = (day < 10) ? "0" + convertIntToString(day) : convertIntToString(day);

    return (new_Year + "-" + new_Month + "-" + new_Day);
}

bool BitcoinExchange::valid_Date(std::string date)
{
    if (date.length() != 10)
        return false;
    std::string year = date.substr(0, 4);
    std::string month = date.substr(5, 2);
    std::string day = date.substr(8, 2);
    
    if (!check_num(year) || !check_num(month) || !check_num(day))
        return(false);
    
    int int_year = ft_stoi(year);
    int int_month = ft_stoi(month);
    int int_day = ft_stoi(day);

    if ((int_year < 2009 || int_year > 2022) || (int_month < 1 || int_month > 12) || (int_day < 1 || int_day > 31))
        return (false);
    
    if ((int_month == 4 || int_month == 6 || int_month == 9 || int_month == 11) && int_day > 30)
        return (false);

    if (int_month == 2)
    {
        bool bisextil = (int_year % 4 == 0 && int_year % 100 != 0) || int_year % 400 == 0;
        if (int_day > (bisextil ? 28 : 29))
            return (false);
    }

    return (true);
}

void BitcoinExchange::valid_Value(const std::string &str)
{
    double value;

    try {
        if (std::find(str.begin(), str.end(), '.') != str.end())
        {
            size_t decimalPoint = str.find('.');
            if (std::find(str.begin() + decimalPoint + 1, str.end(), '.') != str.end())
                throw std::invalid_argument("too many decimal points");
        }

        bool Sign = str[0] == '+' || str[0] == '-';
        for (size_t i = Sign ? 1 : 0; i < str.length(); i++) {
            if (::isdigit(str[i]) || str[i] == '.')
                continue;
            throw std::invalid_argument("not a number => " + str);
        }

        value = ft_stod(str);

    } catch (std::exception &e)
    {
        throw std::invalid_argument("not a number => " + str);
    }

    if (value < 0)
        throw std::invalid_argument("not a positive number");
    
    if (value > 1000.0)
        throw std::invalid_argument("too large a number");
}

bool BitcoinExchange::parce_file(char* file_path)
{
    std::ifstream file(file_path);
    if (!file.is_open())
    {
        std::cout << "Error: file does not exist" << std::endl;
        return (false);
    }
    if (file.peek() == std::ifstream::traits_type::eof())
    {
        std::cout << "Error: file is empty" << std::endl;
        return (false);
    }
    return (true);
    
}

std::string BitcoinExchange::trim(const std::string& str)
{
    size_t first = str.find_first_not_of(' ');
    if (std::string::npos == first)
        return str;

    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

double BitcoinExchange::ft_stod(std::string str)
{
    size_t i = 0;
    double result = 0.0;
    int sign = 1;
    bool decimalPart = false;
    double decimalFactor = 0.1;
    
    while (i < str.length() && std::isspace(str[i]))
    {
        ++i;
    }
    if (i < str.length() && (str[i] == '+' || str[i] == '-'))
    {
        sign = (str[i] == '-') ? -1 : 1;
        ++i;
    }
   while (i < str.length() && (std::isdigit(str[i]) || (str[i] == '.' && !decimalPart)))
   {
        if (str[i] == '.') {
            decimalPart = true;
        } else {
            if (decimalPart) {
                result = result + static_cast<double>(str[i] - '0') * decimalFactor;
                decimalFactor *= 0.1;
            } else {
                result = result * 10.0 + static_cast<double>(str[i] - '0');
            }
        }
        ++i;
        if (str[i] == 'f')
            i++;
    }
    return (result * sign);
}

int BitcoinExchange::ft_stoi(std::string str)
{
    long num = 0;
    int sign = 1;
    size_t i = 0;
    while (i < str.length() && std::isspace(str[i]))
    {
        ++i;
    }
    if (i < str.length() && (str[i] == '+' || str[i] == '-'))
    {
        sign = (str[i] == '-') ? -1 : 1;
        ++i;
    }
    while (i < str.length())
    {
        try 
        {
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && (str[i] - '0') > INT_MAX % 10))
            {
                throw Out_OF_Range();
            }
        }
        catch (const BitcoinExchange::Out_OF_Range &e)
        {
            std::cout << "Exception caught: " << e.what() << std::endl;
            return (0);
        }
        if (str[i] == '.')
            break;
        num = num * 10 + (str[i] - '0');
        ++i;
    }
    return (num * sign);
}

std::string BitcoinExchange::convertIntToString(int nombre)
{
    std::ostringstream new_str;
    new_str << nombre;
    return new_str.str();
}

bool BitcoinExchange::check_num(std::string& str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
        {
            if (str[i] == '-')
                return (true);
            return (false);
        }
    }
    return (true);
}
