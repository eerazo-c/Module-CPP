/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:00:42 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/17 13:01:54 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int fixedPointer;
		static const int RawBits = 8;

	public:
		Fixed();
		Fixed(const Fixed& obj);
		Fixed &operator=(const Fixed &obj);
		~Fixed();

		Fixed(const int _fixedPointer);
		Fixed(const float _fixedPointer);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

};
std::ostream &operator<<( std::ostream &out, Fixed const &obj);

#endif 
