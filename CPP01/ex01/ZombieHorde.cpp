/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:54:37 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/09 14:54:39 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombies;
    int     i;

    if (N <= 0)
        return (NULL);
    zombies = new Zombie[N];
    if (!zombies)
        return (NULL);
    i = 0;
    while (i < N)
    {
        zombies[i].setname(name);
        i++;
    }
    return (zombies);
}
