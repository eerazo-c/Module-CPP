/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:06:32 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/09 17:10:26 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <exception>
#include <ostream>
#include <stdexcept>
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	private:
		const std::string name;
		int grade;

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(std::string _name, int _grade);
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat &operator=(const Bureaucrat &obj);

		std::string getName(void) const;
		int getGrade(void) const;
		void setGrade(int s_grade);

		void increment(int incre);
		void descrement(int descre);

	class GradeTooHighException : public std::exception
	{
		const char* what() const throw(){
			return ("A Bureaucrat can't have more than 150.");
	}
		};

	class GradeTooLowException : public std::exception
	{
		const char* what() const throw() {
			return ("A Bureaucrat can't have lower than 1.");
		}
	};

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif
