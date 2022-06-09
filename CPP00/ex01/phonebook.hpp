/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:50:36 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/09 14:50:38 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
    private:
	        Contact contacts[8];
    public:
            PhoneBook();
			void	add_contact_phonebook(void);
            int		last_contact;
			int		num_contact;
			void	show_phonebook(void);
};

#endif
