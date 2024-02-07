/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:58:29 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/12 16:48:58 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _darksetSecret;
        int         _index;

        std::string _printLen(std::string str) const;
        std::string _getImput(std::string str, int num) const;

    public:
        Contact();
        ~Contact();
        void    init(void);
        void    view(int index) const;
        bool    display(int index) const;
        void    setIndex(int i);
};

#endif
