/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:25:21 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/09 17:25:42 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name ("Bureaucrat"){
	this->grade = 150;
}

Bureaucrat::~Bureaucrat(){

}


Bureaucrat::Bureaucrat(std::string name, int _grade) : name ("Bureaucrat")
{
	if (grade < 0)
		std::cout << "menor a 0" << std::endl;
	if (grade > 150)
		std::cout << "mayor a 150" << std::endl;
	this->grade = _grade;
}

std::string Bureaucrat::getName(void)
{
	return (this->name);
}
