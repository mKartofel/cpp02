/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:36:48 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/28 11:15:14 by vfiszbin         ###   ########.fr       */
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
	Fixed(); //constructeur par défaut
	Fixed(Fixed const &fixed); //constructeur de recopie
	Fixed &operator=(Fixed const &fixed); //operateur d'affection
	~Fixed(); //destructeur

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif