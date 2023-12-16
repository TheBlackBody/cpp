/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:19:24 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/12 16:35:30 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

char* concatenate(const char* cStr, const std::string& str) {
    char* result = new char[std::strlen(cStr) + str.length() + 1];

    std::strcpy(result, cStr);
    std::strcat(result, str.c_str());

    return result;
}


int main (int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./Replace <filename> <to_find> <replace>." << std::endl;
        return 0;
    }
    else
    {
        Replace replace;
        std::ifstream ifs(argv[1]);
         if (!ifs.is_open())
        {
            std::cerr << "Error: Unable to open input file" << std::endl;
            return 0;
        }
        else
        {
            std::string extention = ".replace";
            std::string result;
            std::string s1 = argv[2];
            std::string s2 = argv[3];
            if (!std::getline(ifs, result, '\0'))
            {
                std::cerr << "Error: Empty file" << std::endl;
                return 0;
            }
            ifs.close();
            result = replace.replace(result, s1, s2);
            char* outfile = concatenate(argv[1], extention);
            std::cout << outfile << std::endl;
            std::ofstream ofs(outfile);
            if (!ofs.is_open())
            {
                std::cerr << "Error: Unable to open output file" << std::endl;
                return 1;
            }
            ofs << result;
            ofs.close();
            delete [] outfile;
        }
    }
    return 0;
}