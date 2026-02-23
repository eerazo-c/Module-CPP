/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:15:48 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/23 17:17:30 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "Cat Contructor called" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound(void) const{
	std::cout << "Miau, miuau! 😼" << std::endl;
}
