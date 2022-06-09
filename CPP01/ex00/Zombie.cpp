/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:52:12 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/09 14:52:14 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "Zombie " << zname << " is dead" <<std::endl;
}

Zombie::Zombie(std::string name)
{
    zname = name;
}

void    Zombie::announce(void)
{
    std::cout << this->zname << " BraiiiiiiinnnzzzZ..." << std::endl;
}
