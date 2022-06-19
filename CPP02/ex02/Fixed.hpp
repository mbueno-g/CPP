/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:32:25 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/19 14:06:05 by mbueno-g         ###   ########.fr       */
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

		bool operator>(Fixed const &a) const;
		bool operator<(Fixed const &a) const;
		bool operator>=(Fixed const &a) const;
		bool operator<=(Fixed const &a) const;
		bool operator==(Fixed const &a) const;
		bool operator!=(Fixed const &a) const;
		Fixed operator+(Fixed const &a);
		Fixed operator-(Fixed const &a);
		Fixed operator*(Fixed const &a);
		Fixed operator/(Fixed const &a);
		Fixed& operator++(void);
		Fixed& operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		static const Fixed& min(Fixed const &a, Fixed const &b);
		static const Fixed& max(Fixed const &a, Fixed const &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static Fixed& min(Fixed &a, Fixed &b);
	
	private:
		int					_val;
		static const int	_frac; 
};

std::ostream &operator<<(std::ostream &out, Fixed const & copy);

#endif
