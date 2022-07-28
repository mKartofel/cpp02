/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:36:48 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/28 15:05:11 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
private:
	int _numValue;
	static const int _nbFracBits = 8;
public:
	Fixed(); //constructeur par défaut
	Fixed(int const integer_num);
	Fixed(float const float_num);
	Fixed(Fixed const &fixed); //constructeur de recopie
	Fixed &operator = (Fixed const &fixed); //operateur d'affection
	~Fixed(); //destructeur

	//comparison operators
	bool operator > (Fixed const &fixed) const;
	bool operator >= (Fixed const &fixed) const;
	bool operator < (Fixed const &fixed) const;
	bool operator <= (Fixed const &fixed) const;
	bool operator == (Fixed const &fixed) const;
	bool operator != (Fixed const &fixed) const;

	//arithmetic operators
	Fixed operator + (Fixed const &fixed) const;
	Fixed operator - (Fixed const &fixed) const;
	Fixed operator * (Fixed const &fixed) const;
	Fixed operator / (Fixed const &fixed) const;

	//increment/decrement operators
	//prefix
	Fixed &operator ++ (void);
	Fixed &operator -- (void);
	//postfix
	Fixed operator ++ (int n);
	Fixed operator -- (int n);


	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	static Fixed &min(Fixed &f1, Fixed &f2);
	static Fixed const &min(Fixed const &f1, Fixed const &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);
	static Fixed const &max(Fixed const &f1, Fixed const &f2);
};

std::ostream & operator<<(std::ostream & o, Fixed const & fixed);

#endif