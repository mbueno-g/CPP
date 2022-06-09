/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:54:45 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/09 14:54:47 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z;
    int     N;
    int     i;

    N = 5;
    z = zombieHorde(N, "ZOMBIE");
    if (!z)
    {
        std::cerr << "Allocation fail" << std::endl;
        return (1);
    }
    i = 0;
    while (i < N)
    {
        z[i].announce();
        i++;
    }
    delete [] z;
    return (0);
}
