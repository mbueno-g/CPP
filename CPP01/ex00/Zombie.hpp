/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:52:24 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/09 14:52:27 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string zname;
    public:
        Zombie(std::string name);
        ~Zombie();
        void    announce(void);
        void    setname(std::string name);
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif
