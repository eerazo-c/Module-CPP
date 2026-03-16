/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:33:21 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/16 12:35:45 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "RobotomyRequestForm.hpp"

/*constructor*/

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("default_target") {
}

RobotomyRequestForm::~RobotomyRequestForm(){

}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : AForm("RobotomyRequestForm", 72, 45), target(_target) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj), target(obj.getTarget()) 
{
	*this = obj;
}

/*operator*/

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	if (this != &obj)
		this->target = obj.getTarget();
	return (*this);
}

/*GETTER-SETTER*/
std::string RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

/*MEMBER FUNTION*/

bool RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	(void)executor;
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return (true);
}
