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

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &obj)
		this->fixedPointer = obj.getRawBits();
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Desconstructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPointer;
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPointer = raw;
}
