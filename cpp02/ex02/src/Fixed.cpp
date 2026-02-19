/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:02:25 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/17 13:02:36 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

/*constructor*/

Fixed::Fixed(){
	this->fixedPointer = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
}

Fixed::Fixed(const int _fixedPointer){
	this->fixedPointer = _fixedPointer << this->RawBits;
}

Fixed::Fixed(const float _fixedPointer){
	this->fixedPointer = roundf(_fixedPointer * (1 << this->RawBits));
}

/*Contructor operador*/
Fixed &Fixed::operator=(const Fixed &obj)
{
	if (this != &obj)
		this->fixedPointer = obj.getRawBits();
	return (*this);
}

std::ostream &operator<<( std::ostream &out, Fixed const &obj)
{
	return (out << obj.toFloat());
}

/*NEW*/

bool Fixed::operator>(const Fixed &obj) const
{
	return (this->fixedPointer > obj.getRawBits());
}

bool Fixed::operator<(const Fixed &obj) const
{
	return (this->fixedPointer > obj.getRawBits());
}

bool Fixed::operator>=(const Fixed &obj) const
{
	return (this->fixedPointer >= obj.getRawBits());
}

bool Fixed::operator<=(const Fixed &obj) const
{
	return (this->fixedPointer <= obj.getRawBits());
}

bool Fixed::operator==(const Fixed &obj) const
{
	return (this->fixedPointer == obj.getRawBits());
}

bool Fixed::operator!=(const Fixed &obj) const
{
	return (this->fixedPointer != obj.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &obj) const 
{
	return (this->toFloat() + obj.toFloat());
}

Fixed	Fixed::operator-(const Fixed &obj) const 
{
	return (this->toFloat() - obj.toFloat());
}

Fixed	Fixed::operator*(const Fixed &obj) const 
{
	return (this->toFloat() * obj.toFloat());
}

Fixed	Fixed::operator/(const Fixed &obj) const 
{
	return (this->toFloat() / obj.toFloat());
}

Fixed	&Fixed::operator++( void )
{
	++this->fixedPointer;
	return (*this);
}

Fixed	&Fixed::operator--( void )
{
	--this->fixedPointer;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed temp = *this;
   ++*this;
   return (temp);
}

Fixed	Fixed::operator--( int )
{
	Fixed temp = *this;
   --*this;
   return (temp);
}

/*Desconstructor*/

Fixed::~Fixed(){

}

/*Funtion members*/
int Fixed::getRawBits(void) const
{
	return this->fixedPointer;
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPointer = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->fixedPointer) / (1 << this->RawBits);
}

int Fixed::toInt(void) const
{
	return (this->fixedPointer) / (1 << this->RawBits);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a.getRawBits() < b.getRawBits() ? b : a);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() < b.getRawBits() ? b : a);
}
