/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 18:40:41 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/13 18:41:05 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#ifndef INTERN_HPP
# define INTERN_HPP

#include <ostream>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern 
{	
	public:
		Intern();
		~Intern();
		Intern(const Intern &obj);
		Intern &operator=(const Intern &obj);

		AForm *makeForm(std::string nameForm, std::string targetForm);
		AForm *makeScf(std::string &targetForm) const;
		AForm *makeRrf(std::string &targetForm) const;
		AForm *makePpf(std::string &targetForm) const;
};

typedef AForm *(Intern::*f_form)(std::string &_target) const;

#endif
