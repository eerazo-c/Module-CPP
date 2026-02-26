/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 18:15:18 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/19 18:15:35 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main ( void )
{
	std::cout << std::endl;
	std::cout << "Test" << std::endl;
	std::cout << std::endl;
	
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();

	dog->makeSound();
	cat->makeSound();
	delete dog;
	delete cat;


	std::cout << std::endl;
	std::cout << "Test" <<  std::endl;
	std::cout << std::endl;

	Dog dog1;
	Cat cat1;

	Dog &dogRef = dog1;
	Cat &catRef = cat1;

	Dog dogCpy(dogRef);
	Cat catCpy(catRef);

	std::cout << std::endl;
	std::cout << "Test" << std::endl;
	std::cout << std::endl;
	
	Dog	doggy;
	Cat	catty;

//	AAnimal ani;
	std::cout << "Destructors\n" << std::endl;
	return (0);
}
