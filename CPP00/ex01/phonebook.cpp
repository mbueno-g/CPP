/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:50:30 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/09 14:50:33 by mbueno-g         ###   ########.fr       */
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
	int	j;

	i = 0;
	if (num_contact)
		std::cout << "     Index| FirstName|  LastName|  Nickname|" <<std::endl;
	while (i < num_contact)
	{
		contacts[i].show_contact(1, i + 1);
		i++;
	}
	std::cout << "Introduce the index: ";
	std::cin >> j;
	if (j && j <= num_contact)
		contacts[j - 1].show_contact(2, j);
	else
	{
		//Si se produce un error al tomar la entrada de cin hay que 
		// limpiar la bandera de error y el buffer para que no falle en el futuro la entrada
		std::cin.clear();
		std::cin.ignore(31,'\n'); // elimina o x caracteres del buffero  hasta que encuentra un salto de linea
		std::cout << "There's no contact with that index!" << std::endl;
	}
}
