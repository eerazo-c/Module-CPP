/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 14:20:04 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/23 14:20:16 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"

Animal::Animal(){
	this->type = "Animal";
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal(std::string type){
//	this->type = "Animal";
	this->type = type;
//	std::cout << "Animal " << " Constructor called" << std::endl;
}

Animal::Animal( const Animal &obj )
{
	*this = obj;
}

Animal	&Animal::operator=( const Animal &obj )
{
	if (this != &obj)
		this->type = obj.getType();
	return (*this);
}

Animal::~Animal(){
	std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Animal Sound" << std::endl;
}

std::string Animal::getType(void) const{
	return (this->type);
}
