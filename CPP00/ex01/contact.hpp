/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:50:15 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/09 14:50:17 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>


class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone;
		std::string darkest_secret;
	public:
			void	new_contact(void);
			void	show_contact(int a, int index);
			void	print_contact(std::string str);
};

#endif
