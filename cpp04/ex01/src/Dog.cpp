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

Dog::Dog() : Animal("Dog") {
	this->type = getType();
	std::cout << "Dog Constructor called" << std::endl;
};

Dog::Dog( const Dog &obj ) : Animal::Animal(obj)
{
        *this = obj;
}

Dog &Dog::operator=( const Dog &obj )
{
        if (this != &obj)
                this->type = obj.getType();
        return(*this);
}

Dog::~Dog(){
	std::cout << "Dog Destructor called" << std::endl;
};

void Dog::makeSound(void) const{
	std::cout << "Gua, guau! 🐶" << std::endl;
}

std::string Dog::getType(void) const{
	return (this->type);
}
