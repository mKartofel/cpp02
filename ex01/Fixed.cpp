/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:38:28 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/28 12:16:02 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _numValue(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const integer_num)
{
	std::cout << "Int constructor called" << std::endl;
	_numValue = integer_num << _nbFracBits;
	// std::cout << _numValue << std::endl;
	return ;
}

Fixed::Fixed(float const float_num)
{
	std::cout << "Float constructor called" << std::endl;
	_numValue = (int)roundf(float_num * (1 << _nbFracBits));
	// std::cout << _numValue << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return ;
}

Fixed &Fixed::operator=(Fixed const &fixed) 
{  
    std::cout << "Copy assignment operator called" << std::endl;
    _numValue = fixed.getRawBits();  
    return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::getRawBits(void) const
{
	return _numValue;
}

void Fixed::setRawBits(int const raw)
{
	_numValue = raw;
}

float Fixed::toFloat(void) const
{
	return (float)_numValue / (1 << _nbFracBits);
}

int Fixed::toInt(void) const
{
	return _numValue >> _nbFracBits;
}

std::ostream & operator<<(std::ostream & o, Fixed const & fixed)
{
	o << fixed.toFloat();
	return o;
}