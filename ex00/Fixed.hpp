/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:36:48 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/27 19:43:38 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private:
	int _num;
	const int _nb_frac_bits
public:
	Fixed();
	Fixed(const Fixed &f);
	Fixed	&operator=(const Fixed&fixed);
	~Fixed();
};

#endif