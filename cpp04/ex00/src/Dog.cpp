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

Dog::Dog(){
	std::cout << "Dog Constructor called" << std::endl;
};

Dog::~Dog(){
	std::cout << "Dog Destructor called" << std::endl;
};

void Dog::makeSound(void) const{
	std::cout << "Gua, guau! 🐶" << std::endl;
}

std::string Dog::getType(void) const{
	return (this->type);
}
