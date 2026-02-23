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
}
Animal::Animal(std::string type){
	this->type = type;
	std::cout << this->type << "Constructor called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Destructor called" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Animal Sound" << std::endl;
}
