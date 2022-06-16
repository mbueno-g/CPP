/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:32:39 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/16 17:58:48 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_frac = 8;

Fixed::Fixed(void) : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int a)
{
	std::cout << "Int constructor called" << std::endl;
	this->_val = a;
}

Fixed::Fixed(const float a)
{
	std::cout << "Float constructor called" << std::endl;
	this->_val = pow(2,this->_frac) * a;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed & Fixed::operator=(Fixed const & copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_val = copy.getRawBits();

	return *this;	
}

int	Fixed::getRawBits(void) const
{
	std::cout << "GetRawBits member function called" << std::endl;
	return this->_val;
}

void	Fixed::setRawBits(int const raw)
{
	this->_val = raw;		
}

float Fixed::toFloat(void) const
{
	return (this->_val * pow(2, this->_frac));
}

int	Fixed::toInt(void) const
{
	return (this->_val / pow(2, this->_frac));
}

Fixed & Fixed::operator<<(Fixed const & copy)
{
	std::cout << copy._val << std::endl;

	return *this;	
}

