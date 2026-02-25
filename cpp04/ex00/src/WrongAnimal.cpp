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
	this->type = "Wrong Animal";
	std::cout << "WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &obj )
{
	*this = obj;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &obj )
{
	if (this != &obj)
		this->type = obj.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal(){
	std::cout << " WrongAnimal Destructor Called" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const{
	std::cout << "WrongAnimal sound" << std::endl;
}

/*Wrong Cat*/

WrongCat::WrongCat() : WrongAnimal() 
{
	this->type = "Wrong Cat";
	std::cout << "Wrong Cat Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj ) : WrongAnimal()
{
	*this = obj;
}

WrongCat &WrongCat::operator=( const WrongCat &obj )
{
	if (this != &obj)
		this->type = obj.getType();
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat Destructor Called" << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Wrong cat Sound" << std::endl;
}
