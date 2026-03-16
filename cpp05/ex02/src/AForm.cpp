/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 14:11:53 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/16 14:11:53 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AForm.hpp"

AForm::AForm() : name("Bureaucrat"), signGrade(150), excuGrade(150) {
	this->signal = false;
	std::cout << "Form" << this->name << " created" << std::endl;
}

AForm::~AForm(){
	std::cout << "Form destroyed" << std::endl;
}

AForm::AForm(std::string _name, int _signGrade, int _excuGrade) : name(_name), signGrade(_signGrade), excuGrade(_excuGrade)
{
	if (_signGrade < 0)
		throw GradeTooLowException();
	if (_signGrade > 150)
		throw GradeTooHighException();
}

AForm::AForm(const AForm &obj) : name("Bureaucrat"), signGrade(42), excuGrade(42)  
{
	*this = obj;
}

std::string AForm::getName() const
{
	return (this->name);
}

bool AForm::getSignal() const 
{ 
	return (this->signal); 
}

int AForm::getSignGrade() const 
{ 
	return (this->signGrade); 
}

int AForm::getExcuGrade() const 
{ 
	return (this->excuGrade);
}

bool	AForm::beSigned(Bureaucrat &obj)
{
	if (!this->signal && obj.getGrade() <= this->signGrade)
	{
		this->signal = true;
		return (true);
	}
	else
		throw AForm::GradeTooLowException();
	return (false);
}

AForm &AForm::operator=(const AForm &obj)
{
	if (this != &obj)
		this->signal = obj.getSignGrade();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const AForm &obj)
{
    out << "AForm: " << obj.getName()
        << "\nSign Grade: " << obj.getSignGrade()
        << "\nExcu Grade: " << obj.getExcuGrade() << "\n";
    return out;
}
