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
#include <cmath>

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

		//constructor overland:
		
		//operadores contructor
		bool operator>(const Fixed &obj)const;
		bool operator<(const Fixed &obj)const;
		bool operator>=(const Fixed &obj)const;
		bool operator<=(const Fixed &obj)const;
		bool operator==(const Fixed &obj)const;
		bool operator!=(const Fixed &obj)const;
 
		Fixed operator+(const Fixed &obj)const;
		Fixed operator-(const Fixed &obj)const;
		Fixed operator*(const Fixed &obj)const;
		Fixed operator/(const Fixed &obj)const;

		Fixed &operator++(void); //pre-increment
		Fixed &operator--(void);
		Fixed operator++(int);//post-increment
		Fixed operator--(int);

		/*funtion min/max*/
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

		/*Getters/Setters*/
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

};
std::ostream &operator<<( std::ostream &out, Fixed const &obj);

#endif 
