/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:32:39 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/19 14:07:28 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_frac = 8;

Fixed::Fixed(void) : _val(0)
{
}

Fixed::Fixed(const int a)
{
	std::cout << "Int constructor called" << std::endl;
	this->_val = a << this->_frac;
}

Fixed::Fixed(const float a)
{
	std::cout << "Float constructor called" << std::endl;
	this->_val = roundf(1 << this->_frac) * a;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const & copy)
{
	*this = copy;
}

Fixed & Fixed::operator=(Fixed const & copy)
{
	this->_val = copy.getRawBits();

	return *this;	
}

int	Fixed::getRawBits(void) const
{
	return this->_val;
}

void	Fixed::setRawBits(int const raw)
{
	this->_val = raw;		
}

float Fixed::toFloat(void) const
{
	return ((double)this->_val / (double)(1 << this->_frac));
}

int	Fixed::toInt(void) const
{
	return (this->_val >> this->_frac);
}

std::ostream &operator<<(std::ostream &out, Fixed const & copy)
{
	out << copy.toFloat();

	return out;
}

bool Fixed::operator>(Fixed const &a) const
{
	return this->_val > a._val;
}

bool Fixed::operator<(Fixed const &a) const
{
	return this->_val < a._val;
}

bool Fixed::operator>=(Fixed const &a) const
{
	return this->_val >= a._val;
}

bool Fixed::operator<=(Fixed const &a) const
{
	return this->_val <= a._val;
}

bool Fixed::operator==(Fixed const &a) const
{
	return this->_val == a._val;
}

bool Fixed::operator!=(Fixed const &a) const
{
	return this->_val != a._val;
}

Fixed Fixed::operator+(Fixed const &a)
{
	return this->toFloat() + a.toFloat();
}

Fixed Fixed::operator-(Fixed const &a)
{
	return this->toFloat() - a.toFloat();
}

Fixed Fixed::operator*(Fixed const &a)
{
	return this->toFloat() * a.toFloat();
}

Fixed Fixed::operator/(Fixed const &a)
{
	return this->toFloat() / a.toFloat();
}

//pre-increment: ++a
Fixed& Fixed::operator++(void)
{
	this->_val++;
	return (*this);
}

//pre-decrement: --a
Fixed& Fixed::operator--(void)
{
	this->_val--;
	return (*this);
}

//post-increment: a++
Fixed Fixed::operator++(int)
{
	Fixed b(*this);

	this->_val++;
	return b;
}

//post-decrement: a--
Fixed Fixed::operator--(int)
{	
	Fixed b(*this);

	this->_val--;
	return b;
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return b;
	else
		return a;
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return a;
	else
		return b;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return b;
	else
		return a;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	else
		return b;
}

