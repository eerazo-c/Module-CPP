/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 21:11:01 by elerazo-          #+#    #+#             */
/*   Updated: 2026/04/02 21:15:04 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Span.hpp"
#include <iostream>

Span::Span() : vect(0), N(0){

}

Span::~Span(){

}

Span::Span(unsigned int n) : N(n){

}

Span::Span(const Span &obj)
{
	*this = obj;
}

Span& Span::operator=(const Span &obj)
{
	*this = obj;
	return (*this); //->agrege est erturn por el compilador quitar luego si falla
}

void Span::addNumber(unsigned int num)
{
	std::vector<unsigned int>::iterator it;
	it = vect.begin();
	std::cout << "inicio" << it << std::endl;

	if (vect.size() >= N)
		throw notAdded();
	vect.push_back(num);
	it = vect.end();
	std::cout << "final" << it << std::endl;
}
/*
Span::unsigned int shortestSpan()
{

}

Span::unsigned int longestSpan()
{

}

*/
