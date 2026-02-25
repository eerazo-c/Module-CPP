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
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"

int main()
{
	Animal 				Paco("Paco");
	Dog					Kenji;
	Cat					Nala;
	const WrongAnimal* 	Rini = new WrongCat;

	std::cout << "MY TEST" << std::endl;
	Paco.makeSound();
	Kenji.makeSound();
	Nala.makeSound();
	Rini->makeSound();
	
	std::cout << std::endl ;
	std::cout << "Subject Original Test" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	return 0;
}
