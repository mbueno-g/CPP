/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:50:08 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/16 16:08:18 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void check_cin(void)
{
	if(std::cin.eof())
		exit(0);
}

void    Contact::new_contact()
{
    std::cout << "First name: ";
	std::getline(std::cin, this->first_name);
	check_cin();
	std::cout << "Last name: ";
	std::getline(std::cin, this->last_name);
	check_cin();
    std::cout << "Nickname: ";
	std::getline(std::cin, this->nickname);
	check_cin();
    std::cout << "Phone number: ";
	std::getline(std::cin, this->phone);
	check_cin();
    std::cout << "Darkest secret: ";
	std::getline(std::cin, this->darkest_secret);
	check_cin();
}

void	Contact::print_contact(std::string str)
{
	if (str.length() > 10)
		std::cout << std::setw(10) << str.substr(0, 9).append(".") << "|";
	else
		std::cout << std::right << std::setfill(' ') << std::setw(10) << str << "|";
	return ;
}

void	Contact::show_contact(int a, int index)
{
	if (a == 1)
	{
		std::cout << "         "<< index << "|";
		print_contact(first_name);
		print_contact(last_name);
		print_contact(nickname);
		std::cout << std::endl;
	}
	else
	{
		std::cout << "First name     :" << first_name << std::endl;
		std::cout << "Last name      :" << last_name << std::endl;
		std::cout << "Nickname       :" << nickname << std::endl;
		std::cout << "Phone number   :" << phone << std::endl;
		std::cout << "Darkest secret :" << darkest_secret << std::endl;
	}
}
