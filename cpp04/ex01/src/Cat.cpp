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
	this->catBrain = new Brain;
	this->type = getType();
}

Cat::Cat( const Cat &obj ) : Animal::Animal(obj)
{
	this->type = obj.getType();
	this->catBrain = new Brain(*(obj.getBrain()));
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat &Cat::operator=( const Cat &obj )
{
	this->type = obj.getType();
        if (this->catBrain)
                delete(this->catBrain);
        this->catBrain = new Brain(*(obj.getBrain()));
        return (*this);
}

Cat::~Cat(){
	delete this->catBrain;
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound(void) const{
	std::cout << "Miau, miuau! 😼" << std::endl;
}

Brain *Cat::getBrain(void) const{
	return (this->catBrain);
}
