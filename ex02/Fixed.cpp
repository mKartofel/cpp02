/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:38:28 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/28 15:16:14 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _numValue(0)
{
	return ;
}

Fixed::Fixed(int const integer_num)
{
	_numValue = integer_num << _nbFracBits;
	// std::cout << _numValue << std::endl;
	return ;
}

Fixed::Fixed(float const float_num)
{
	_numValue = (int)roundf(float_num * (1 << _nbFracBits));
	// std::cout << _numValue << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &fixed)
{
	*this = fixed;
	return ;
}

Fixed &Fixed::operator=(Fixed const &fixed) 
{  
    _numValue = fixed.getRawBits();  
    return *this;
}

Fixed::~Fixed()
{
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

//comparison operators

bool Fixed::operator > (Fixed const &fixed) const
{
	return this->_numValue > fixed._numValue;
}

bool Fixed::operator >= (Fixed const &fixed) const
{
	return this->_numValue >= fixed._numValue;
}

bool Fixed::operator < (Fixed const &fixed) const
{
	return this->_numValue < fixed._numValue;
}

bool Fixed::operator <= (Fixed const &fixed) const
{
	return this->_numValue <= fixed._numValue;
}

bool Fixed::operator == (Fixed const &fixed) const
{
	return this->_numValue == fixed._numValue;
}

bool Fixed::operator != (Fixed const &fixed) const
{
	return this->_numValue != fixed._numValue;
}

//arithmetic operators

Fixed Fixed::operator + (Fixed const &fixed) const
{
	Fixed res;
	
	res.setRawBits(this->_numValue + fixed._numValue);
	return res;
}

Fixed Fixed::operator - (Fixed const &fixed) const
{
	Fixed res;
	
	res.setRawBits(this->_numValue - fixed._numValue);
	return res;
}

Fixed Fixed::operator * (Fixed const &fixed) const
{
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator / (Fixed const &fixed) const
{
	return Fixed(this->toFloat() / fixed.toFloat());
}

//increment/decrement operators
//prefix
Fixed &Fixed::operator ++ (void)
{
	_numValue++;
	return *this;
}

Fixed &Fixed::operator -- (void)
{
	_numValue--;
	return *this;
}

//postfix
Fixed Fixed::operator ++ (int n)
{
   Fixed res = *this;
   
    if( n != 0 )
        _numValue += n;
    else
        _numValue++; 
   return res;
}

Fixed Fixed::operator -- (int n)
{
   Fixed res = *this;
   
    if( n != 0 )
        _numValue -= n;
    else
        _numValue--; 
   return res;
}

//min/max
Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}
Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}

Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}
