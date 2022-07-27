/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:36:48 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/27 20:00:30 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private:
	int _numValue;
	const int _nbFracBits;
public:
	Fixed();
	Fixed(const Fixed &f);
	Fixed	&operator=(const Fixed&fixed);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif