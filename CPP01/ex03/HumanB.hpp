/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:01:18 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/09 15:30:51 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB : public Weapon
{
    private:
        std::string _name;
        Weapon		*_weapon;
    public:
        HumanB(std::string n);
        void        attack();
        void        setWeapon(Weapon& w);
};

#endif
