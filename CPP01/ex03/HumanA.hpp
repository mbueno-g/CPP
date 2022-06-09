/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:01:10 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/09 15:30:55 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA : public Weapon
{
    private:
        std::string _name;
        Weapon		&_weapon;
    public:
        HumanA(std::string n, Weapon& w);
        void        attack();
};

#endif
