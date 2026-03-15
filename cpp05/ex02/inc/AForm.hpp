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

#include <exception>
#include <ostream>
#include <stdexcept>
#ifndef FORM_HPP
# define FORM_HPP

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
		~AForm();
		AForm(std::string _name, int _signGrade, int _excuGrade);
		AForm(const AForm &obj);
		AForm &operator=(const AForm &obj);

		std::string getName() const;
		int getGrade(void) const;
		bool getSignal() const;
		int getSignGrade() const;
		int getExcuGrade() const;

		//void setGrade(int s_grade);
		void increment(int incre);
		void descrement(int descre);
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

std::ostream &operator<<(std::ostream &out, const AForm &obj);

#endif
