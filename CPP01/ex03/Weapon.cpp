/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:01:48 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/09 15:30:49 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string s) : _type(s)
{
}

const std::string& Weapon::getType()
{
    return this->_type;
}

void    Weapon::setType(std::string s)
{
    this->_type = s;
}
