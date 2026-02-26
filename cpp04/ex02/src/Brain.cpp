/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 16:12:35 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/26 16:12:56 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Brain.hpp"

Brain::Brain(){
	this->ideas = new std::string[100];
	for(size_t i = 0; i < 100; i++)
		this->ideas[i] = ":)";
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain( Brain &obj){
	
	std::string *obj_ideas = obj.getIdeas();

	this->ideas = new std::string[100];
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = obj_ideas[i];
}

Brain &Brain::operator=(const Brain &obj)
{
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return(*this);
}

Brain::~Brain(){
	delete[] (this->ideas);
	std::cout << "Brain Destructor called" << std::endl;
}

std::string *Brain::getIdeas(void)
{
	return (this->ideas);
}
