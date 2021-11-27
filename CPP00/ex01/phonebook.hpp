
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