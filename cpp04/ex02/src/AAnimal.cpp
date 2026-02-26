/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 14:20:04 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/23 14:20:16 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AAnimal.hpp"

AAnimal::AAnimal(){
	this->type = "AAnimal";
	std::cout << "AAnimal Constructor Called" << std::endl;
}

AAnimal::AAnimal(std::string type){
	this->type = type;
}

AAnimal::AAnimal( const AAnimal &obj )
{
	*this = obj;
}

AAnimal	&AAnimal::operator=( const AAnimal &obj )
{
	if (this != &obj)
		this->type = obj.getType();
	return (*this);
}

AAnimal::~AAnimal(){
	std::cout << "AAnimal Destructor called" << std::endl;
}

void AAnimal::makeSound() const {
	std::cout << "AAnimal Sound" << std::endl;
}

std::string AAnimal::getType(void) const{
	return (this->type);
}
