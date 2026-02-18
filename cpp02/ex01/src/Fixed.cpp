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

Fixed::Fixed(){
	this->fixedPointer = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	
	*this = obj;
}

Fixed::Fixed(const int _fixedPointer){
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointer = _fixedPointer << this->RawBits;
}

Fixed::Fixed(const float _fixedPointer){
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointer = roundf(_fixedPointer * (1 << this->RawBits));
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &obj)
		this->fixedPointer = obj.getRawBits();
	return (*this);
}

std::ostream &operator<<( std::ostream &out, Fixed const &obj)
{
	return (out << obj.toFloat());
}

Fixed::~Fixed(){
	std::cout << "Desconstructor called" << std::endl;
}

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
