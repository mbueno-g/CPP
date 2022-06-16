/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:50:30 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/16 16:08:21 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    last_contact = 0;
	num_contact = 0;
}

void PhoneBook::add_contact_phonebook()
{
	last_contact %= 8;
	contacts[last_contact].new_contact();
	last_contact += 1;
	if (num_contact != 8)
		num_contact += 1;
}

void	PhoneBook::show_phonebook()
{
	int	i;
	std::string j;
	int	k;

	i = 0;
	if (num_contact)
		std::cout << "     Index| FirstName|  LastName|  Nickname|" <<std::endl;
	while (i < num_contact)
	{
		contacts[i].show_contact(1, i + 1);
		i++;
	}
	std::cout << "Introduce the index: ";
	std::getline(std::cin, j);
	if (std::cin.eof())
		exit(0);
	if (j.length() != 1)
		return ;
	k = j[0] - '0';
	if (k && k <= num_contact)
		contacts[k - 1].show_contact(2, k);
	else
		std::cout << "There's no contact with that index!" << std::endl;
}
