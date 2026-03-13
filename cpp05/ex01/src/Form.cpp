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

Form::Form() : name("Bureaucrat"), signGrade(42), excuGrade(42) {
	this->signal = false;
	std::cout << "Form" << this->name << " created" << std::endl;
}

Form::~Form(){

}

Form::Form(std::string _name, int _signGrade, int _excuGrade) : name(_name)
{
	if (_signGrade < 0)
		throw GradeTooLowException();
	if (_grade > 150)
		throw GradeTooHighException();
	this->grade = _grade;
}

Form::Form(const Form &obj)
{
	*this = obj;
}

Form &Form::operator=(const Form &obj)
{
	if (this != &obj)
		this->grade = obj.getGrade();
	return (*this);
}

std::string Form::getName(void) const
{
	return (this->name);
}

int Form::getGrade(void) const 
{
	return (this->grade);
}

void Form::setGrade(int s_grade)
{
	if (s_grade < 0)
		throw GradeTooLowException();
	if (s_grade > 150)
		throw GradeTooHighException();
	this->grade = s_grade;
}

void Form::increment(int incre)
{
	if (incre < 0)
		throw GradeTooLowException();
	if (incre > 150)
		throw GradeTooHighException();
	this->setGrade(this->getGrade() - incre);
}

void Form::descrement(int descre)
{
	if (descre < 0)
		throw GradeTooLowException();
	if (descre > 150)
		throw GradeTooHighException();
	this->setGrade(this->getGrade() + descre);
}

std::ostream &operator<<(std::ostream &out, const Form &obj)
{
	if (obj.getGrade() < 0 || obj.getGrade() > 150)
		return (out << "Not Available");
	return (out << "Form: " << obj.getName() << "\n Grade: " << obj.getGrade() << "\n");
}
