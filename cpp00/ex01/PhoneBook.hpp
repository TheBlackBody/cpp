/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:58:24 by sfernand          #+#    #+#             */
/*   Updated: 2023/12/05 15:29:21 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
    private:
        Contact _contacts[8];
        int     _readImput(void) const;
    
    public:
        PhoneBook();
        ~PhoneBook();
        
        void    addContact(void);
        void    printContacts(void) const;
        void    search(void) const;
        void    launch(void) const;
};

#endif