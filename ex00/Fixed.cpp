/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:38:28 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/27 19:59:14 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _num_value(0)
{
	return ;
}

Fixed::~Fixed()
{
	return ;
}

int Fixed::getRawBits(void) const
{
	std::cout << _numValue << std::endl;
}

void Fixed::setRawBits(int const raw);
{
	_numValue = raw;
}