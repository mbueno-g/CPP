/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:50:23 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/09 14:50:25 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	while (1)
	{
        std::cout << "Introduce ADD, SEARCH or EXIT: ";
		std::cin >> command;
		if (command == "EXIT")
			break;
		else if (command == "ADD")
            phonebook.add_contact_phonebook();
		else if (command == "SEARCH")
			phonebook.show_phonebook();
	}
	return (0);
}
