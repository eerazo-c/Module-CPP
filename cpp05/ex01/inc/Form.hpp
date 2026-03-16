/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 18:40:41 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/13 18:41:05 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <exception>
#include <ostream>
#include <stdexcept>
#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool signal;
		const int signGrade;
		const int excuGrade;

	public:
		Form();
		~Form();
		Form(std::string _name, int _signGrade, int _excuGrade);
		Form(const Form &obj);
		Form &operator=(const Form &obj);

		std::string getName() const;
		bool getSignal() const;
		int getSignGrade() const;
		int getExcuGrade() const;

		bool beSigned(Bureaucrat &obj);

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

std::ostream &operator<<(std::ostream &out, const Form &obj);

#endif
