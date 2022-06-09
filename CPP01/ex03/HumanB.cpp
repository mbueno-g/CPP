/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:01:28 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/09 15:30:52 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n) : _name(n) , _weapon(NULL)
{
}

void HumanB::attack()
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& w)
{
    this->_weapon = &w;
}
