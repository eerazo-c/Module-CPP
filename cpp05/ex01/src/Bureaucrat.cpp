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

Bureaucrat::Bureaucrat() : name("Bureaucrat"){
	this->grade = 150;
}

Bureaucrat::~Bureaucrat(){

}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name)
{
	if (_grade < 0)
		throw GradeTooLowException();
	if (_grade > 150)
		throw GradeTooHighException();
	this->grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	*this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
		this->grade = obj.getGrade();
	return (*this);
}

std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

int Bureaucrat::getGrade(void) const 
{
	return (this->grade);
}

void Bureaucrat::setGrade(int s_grade)
{
	if (s_grade < 0)
		throw GradeTooLowException();
	if (s_grade > 150)
		throw GradeTooHighException();
	this->grade = s_grade;
}

void Bureaucrat::increment(int incre)
{
	if (incre < 0)
		throw GradeTooLowException();
	if (incre > 150)
		throw GradeTooHighException();
	this->setGrade(this->getGrade() - incre);
}

void Bureaucrat::descrement(int descre)
{
	if (descre < 0)
		throw GradeTooLowException();
	if (descre > 150)
		throw GradeTooHighException();
	this->setGrade(this->getGrade() + descre);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
	if (obj.getGrade() < 0 || obj.getGrade() > 150)
		return (out << "Not Available");
	return (out << "Bureaucrat: " << obj.getName() << "\n Grade: " << obj.getGrade() << "\n");
}

//aqui

void	Bureaucrat::signForm(Form &obj)
{
	if (obj.beSigned(*this))
		std::cout << this->name << " signed " << obj.getName() << std::endl;
	else
		std::cout << this->name << " couldn't sign " << obj.getName() << " because the grade is to low\n";
}
