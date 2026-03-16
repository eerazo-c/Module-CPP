/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 18:40:41 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/13 18:41:05 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#ifndef FORM_HPP
# define FORM_HPP

#include <exception>
#include <ostream>
#include <stdexcept>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool signal;
		const int signGrade;
		const int excuGrade;

	public:
		AForm();
		virtual ~AForm();
		AForm(std::string _name, int _signGrade, int _excuGrade);
		AForm(const AForm &obj);
		AForm &operator=(const AForm &obj);

		std::string getName() const;
		bool getSignal() const;
		int getSignGrade() const;
		int getExcuGrade() const;

		virtual bool beSigned(Bureaucrat &obj);
		virtual bool execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception
	{
		const char* what() const throw(){
			return ("The grade is too hight.");
	}
		};

	class GradeTooLowException : public std::exception
	{
		const char* what() const throw() {
			return ("The grade is too low.");
		}
	};

};

std::ostream &operator<<(std::ostream &out, const AForm &obj);

#endif
