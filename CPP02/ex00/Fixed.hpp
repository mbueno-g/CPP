/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:32:25 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/09 18:52:22 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
    public:
        Fixed(void);
        Fixed(Fixed const & copy);
        ~Fixed();
        Fixed& operator=(Fixed const & copy)

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	
	private:
		int					_val;
		static const int	_frac; 
}

#endif
