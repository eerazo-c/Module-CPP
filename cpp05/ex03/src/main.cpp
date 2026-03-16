/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:25:53 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/09 17:26:37 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <exception>
#include <iostream>

int main()
{
	{
		try{
			std::cout << "\033[32m Interns \033[0m " << std::endl;
			Inter randominter;
			Bureaucrat bur1("Eli", 1);
			AForm *s;
			AForm *r;
			AForm *p;
			s = randominter.makeForm("ShrubberyCreationForm", "Bender");
			r = randominter.makeForm("RobotomyRequestForm", "Bender");
			p = randominter.makeForm("PresidentialPardonForm", "Bender");
			bur1.signAForm(s);
			bur1.signAForm(r);
			bur1.signAForm(p);

			bur1.executeForm(s);
			bur1.executeForm(r);
			bur1.executeForm(p);

			delete s;
			delete r;
			delete p;

		}
		catch(std::exception & e)
		{
			std::cout << "\033[31m ERROR \033[0m \n" << e.what() << std::endl;
		}
	}

	return (0);
}
