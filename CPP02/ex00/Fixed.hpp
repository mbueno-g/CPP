/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:32:25 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/16 17:58:49 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed(void);
        Fixed(const int a);
        Fixed(const float a);
        Fixed(Fixed const & copy);
        ~Fixed();
        Fixed& operator=(Fixed const & copy);
        Fixed& operator<<(Fixed const & copy);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	
	private:
		int					_val;
		static const int	_frac; 
};

#endif
