/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:54:29 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/09 14:54:31 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP


# include <string>
#include <iostream>

class Zombie
{
    private:
        std::string zname;
    public:
        ~Zombie();
        void    announce(void);
        void    setname(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
