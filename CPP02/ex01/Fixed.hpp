/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:32:25 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/19 12:04:21 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed(void);
        Fixed(Fixed const & copy);
        Fixed(const int a);
        Fixed(const float a);
        ~Fixed();
        Fixed& operator=(Fixed const & copy);

		int		toInt(void) const;
		float	toFloat(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	
	private:
		int					_val;
		static const int	_frac; 
};

std::ostream &operator<<(std::ostream &out, Fixed const & copy);

#endif
