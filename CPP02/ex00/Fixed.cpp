/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:32:39 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/09 18:52:17 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_frac = 8;

Fixed::Fixed(void) : _val(0)
{
	std::cout << "Default constructor called" 
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const & copy)
{
	*this = copy
}

Fixed & Fixed::operator=(Fixed const & copy)
{
	this->_m = copy.getRawBits();

	return *this;	
}


int	getRawBits(void) const
{
	
}


int	setRawBits(int const raw)
{
	



	
}

