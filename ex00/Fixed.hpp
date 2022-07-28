/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:36:48 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/28 11:07:55 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private:
	int _numValue;
	static const int _nbFracBits = 8;
public:
	Fixed();
	Fixed(Fixed const &fixed);
	Fixed &operator=(Fixed const &fixed);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif