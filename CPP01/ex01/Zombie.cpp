/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:54:20 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/09 14:54:24 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "Zombie " << zname << " is dead" <<std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->zname << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setname(std::string name)
{
    zname = name;
}
