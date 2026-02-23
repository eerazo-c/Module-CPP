/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 18:41:03 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/23 18:45:27 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

void WrongAnimal::makeSound(void) const{
	std::cout << "WrongAnimal sound" << std::endl;
}
