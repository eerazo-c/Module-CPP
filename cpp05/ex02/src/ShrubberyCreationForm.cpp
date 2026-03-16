/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:33:21 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/16 12:35:45 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ShrubberyCreationForm.hpp"

/*constructor*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("default_target") {
}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : AForm("ShrubberyCreationForm", 145, 137), target(_target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj), target(obj.getTarget()) 
{
	*this = obj;
}

/*operator*/

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if (this != &obj)
		this->target = obj.getTarget();
	return (*this);
}

/*GETTER-SETTER*/
std::string ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

/*MEMBER FUNTION*/

bool ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	(void)executor;
	std::cout << this->target << " dibujar arbol ascii" << std::endl;
	return (true);
}
