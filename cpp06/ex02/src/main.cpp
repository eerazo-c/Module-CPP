/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 15:32:45 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/18 15:35:08 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Base.hpp"
#include <cstdlib>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base& p)
{
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "The Reference is A\n";
	} catch (...) {}

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "The Reference is B\n";
	} catch (...) {}

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "The Reference is C\n";
	} catch (...) {}


}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "The pointer is A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "The pointer is B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "The pointer es C\n";
}

Base *generate(void)
{
	srand(time(NULL));

	int random = rand() % 4;

	if (random == 0)
		return new A();
	else if (random == 1)
		return new B();
	else
		return new C();
}

int main(void)
{
	Base *obj = generate();

	{
		std::cout << "Pointer test" << std::endl;
		identify(obj);
	}
	std::cout << std::endl;
	{
		std::cout << "Reference test" << std::endl;
		identify(*obj);
	}
	delete(obj);
}
