/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:52:38 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/09 14:52:50 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::cout << "STACK MEMORY -- ZOMBIE" << std::endl;
    randomChump("Ana");

    std::cout << "HEAP MEMORY -- ZOMBIE" << std::endl;
    Zombie *z = newZombie("Javier");
    z->announce();
    delete z;

    return (0);
}
