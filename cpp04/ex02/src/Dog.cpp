/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:17:46 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/23 17:20:39 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") {
	std::cout << "Dog Constructor called" << std::endl;
	this->dogBrain = new Brain;
	this->type = getType();
};

Dog::Dog(Dog &obj ) : AAnimal::AAnimal(obj)
{ 
	this->type = obj.getType();
	this->dogBrain = new Brain(*(obj.getBrain()));
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog &Dog::operator=( const Dog &obj )
{
	this->type = obj.getType();
	if (this->dogBrain)
		delete(this->dogBrain);
	this->dogBrain = new Brain(*(obj.getBrain()));
	return (*this);
}

Dog::~Dog(){
	delete this->dogBrain;
	std::cout << "Dog Destructor called" << std::endl;
};

void Dog::makeSound(void) const{
	std::cout << "Gua, guau! 🐶" << std::endl;
}

Brain *Dog::getBrain(void) const{
	return (this->dogBrain);
}
