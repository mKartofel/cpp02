/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:36:26 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/28 15:45:00 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	//subject tests
	std::cout << "subject tests" << std::endl;
	Fixed a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;



	//comparison operators
	Fixed c (2);
	Fixed d (5.7f);
	Fixed const e (2);
	Fixed f (-42.78f);
	
	std::cout << std::endl << "comparison operators" << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;

	std::cout << "c < d = " << (c < d) << std::endl;
	std::cout << "c <= d = " << (c <= d) << std::endl;
	std::cout << "c > d = " << (c > d) << std::endl;
	std::cout << "c >= d = " << (c >= d) << std::endl;
	
	std::cout << "d < c = " << (d < c) << std::endl;
	std::cout << "d <= c = " << (d <= c) << std::endl;
	std::cout << "d > c = " << (d > c) << std::endl;
	std::cout << "d >= c = " << (d >= c) << std::endl;

	std::cout << "c == d = " << (c == d) << std::endl;
	std::cout << "c == e = " << (c == e) << std::endl;
	std::cout << "c != d = " << (c != d) << std::endl;
	std::cout << "c != e = " << (c != e) << std::endl;

	//arithmetic operators
	std::cout << std::endl << "arithmetic operators" << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;
	
	std::cout << "c + d = " << (c + d) << std::endl;
	std::cout << "c - d = " << (c - d) << std::endl;
	std::cout << "c * d = " << (c * d) << std::endl;
	std::cout << "c / d = " << (c / d) << std::endl;

	std::cout << "c + f = " << (c + f) << std::endl;
	std::cout << "c - f = " << (c - f) << std::endl;
	std::cout << "f + c = " << (f + c) << std::endl;
	std::cout << "f - c = " << (f - c) << std::endl;
	std::cout << "f * c = " << (f * c) << std::endl;
	std::cout << "f / c = " << (f / c) << std::endl;

	std::cout << "f + c + e = " << (f + c + e) << std::endl;

	//increment/decrement operators
	std::cout << std::endl << "increment/decrement operators" << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;

	std::cout << "++c = " << (++c) << std::endl;
	std::cout << "--c = " << (--c) << std::endl;
	std::cout << "c++ = " << (c++) << std::endl;
	std::cout << "c = " << (c) << std::endl;
	std::cout << "c-- = " << (c--) << std::endl;
	std::cout << "c = " << (c) << std::endl;
	std::cout << "c.operator++(2) = " << (c.operator++(2)) << std::endl;
	std::cout << "c = " << (c) << std::endl;
	std::cout << "c.operator--(2) = " << (c.operator--(2)) << std::endl;
	std::cout << "c = " << (c) << std::endl;


	//min/max
	std::cout << std::endl << "min/max" << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;

	std::cout << "min(c,d) = " << Fixed::min(c, d) << std::endl;
	std::cout << "const min(e,d) = " << Fixed::min(e, d) << std::endl;
	std::cout << "max(c,d) = " << Fixed::max(c, d) << std::endl;
	std::cout << "const max(e,d) = " << Fixed::max(e, d) << std::endl;



	return 0;
}