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

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if (this != &obj)
		this->target = obj.getTarget();
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

bool ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	(void)executor;
	std::ofstream file;
	file.open(&(this->target + "_shrubbery")[0], std::ios::out | std::ios::trunc);
	if(!file.is_open())
	{
		std::cerr << "Error creating the file" << std::endl;
		return (false);
	}
		file << "      .-`   `-." << std::endl;
		file << "     /  .-. .-. \\" << std::endl;
		file << "    |  /   Y   \\ |" << std::endl;
		file << "    |  \\       / |" << std::endl;
		file << "     \\  `-----' /" << std::endl;
		file << "      `-._____.' " << std::endl;
		file << "          ||" << std::endl;
		file << "          ||" << std::endl;
	file.close();
	return (true);
}
