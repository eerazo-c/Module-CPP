/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:33:21 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/16 12:35:45 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PresidentialPardonForm.hpp"

/*constructor*/

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("default_target") {
}

PresidentialPardonForm::~PresidentialPardonForm(){

}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : AForm("PresidentialPardonForm", 25, 5), target(_target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj), target(obj.getTarget()) 
{
	*this = obj;
}

/*operator*/

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	if (this != &obj)
		this->target = obj.getTarget();
	return (*this);
}

/*GETTER-SETTER*/
std::string PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

/*MEMBER FUNTION*/

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	(void)executor;
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return (true);
}
