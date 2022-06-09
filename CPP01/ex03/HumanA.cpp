/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:01:02 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/09 15:30:56 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string n, Weapon& w) : _name(n) , _weapon(w)
{
}

void HumanA::attack()
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

