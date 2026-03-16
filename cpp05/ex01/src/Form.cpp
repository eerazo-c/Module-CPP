/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:25:21 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/09 17:25:42 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Form.hpp"

Form::Form() : name("Bureaucrat"), signGrade(150), excuGrade(150) {
	this->signal = false;
	std::cout << "Form " << this->name << " created" << std::endl;
}

Form::~Form(){

}

Form::Form(std::string _name, int _signGrade, int _excuGrade) : name(_name), signGrade(_signGrade), excuGrade(_excuGrade)
{
	if (_signGrade < 0)
		throw GradeTooLowException();
	if (_signGrade > 150)
		throw GradeTooHighException();
}

Form::Form(const Form &obj) : name("Bureaucrat"), signGrade(42), excuGrade(42)  
{
	*this = obj;
}

Form &Form::operator=(const Form &obj)
{
	if (this != &obj)
		this->signal = obj.getSignGrade();
	return (*this);
}

/*funtion miembros*/

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getSignal(void) const 
{
	return (this->signal);
}

int Form::getSignGrade() const 
{ 
	return (this->signGrade); 
}

int Form::getExcuGrade() const 
{ 
	return (this->excuGrade);
}

bool	Form::beSigned(Bureaucrat &obj)
{
	if (!this->signal && obj.getGrade() <= this->signGrade)
	{
		this->signal = true;
		return (true);
	}
	else
		throw Form::GradeTooLowException();
	return (false);
}

std::ostream &operator<<(std::ostream &out, const Form &obj)
{
    out << "Form: " << obj.getName()
        << "\nSign Grade: " << obj.getSignGrade()
        << "\nExcu Grade: " << obj.getExcuGrade() << "\n";
    return out;
}
