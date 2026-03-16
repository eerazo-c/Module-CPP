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
			std::cout << "\033[32m ShrubberyCreationForm \033[0m " << std::endl;
			Bureaucrat buro1("Eli", 1);
			ShrubberyCreationForm s1("exist");
			buro1.signAForm(s1);
			buro1.executeForm(s1);
			//buro1.executeForm(s1);
		//	std::cout << std::endl;
			Bureaucrat buro2("Gloria", 142);
			ShrubberyCreationForm s2("This shouldn't exist");
			buro2.signAForm(s2);
			buro2.executeForm(s2);
			//buro2.executeForm(s2);
			std::cout << std::endl;
		}
		catch(std::exception & e)
		{
			std::cout << "\033[31m ERROR \033[0m \n" << e.what() << std::endl;
		}
	}

	{
		try {
			std::cout << std::endl;
			std::cout << "\033[32m RobotomyRequestForm \033[0m " << std::endl;
			Bureaucrat buro3("Isra", 1);
			RobotomyRequestForm R1("exist");
			buro3.signAForm(R1);
			buro3.executeForm(R1);
			//buro3.executeForm(R1);
			//std::cout << std::endl;
			Bureaucrat buro4("Dei", 70);
			RobotomyRequestForm R2("This shouldn't exist");
			buro4.signAForm(R2);
			buro4.executeForm(R2);
			//buro4.executeForm(R2);
			std::cout << std::endl;

		}
		catch(std::exception & e)
		{
			std::cout << "\033[31m ERROR \033[0m \n" << e.what() << std::endl;
		}
	{
		try {
			std::cout << std::endl;
			std::cout << "\033[32m PresidentialPardonForm \033[0m " << std::endl;
			Bureaucrat buro5("Diana", 1);
			PresidentialPardonForm p1("exist");
			buro5.signAForm(p1);
			buro5.executeForm(p1);
			//buro5.executeForm(p1);
			//std::cout << std::endl;
			Bureaucrat buro6("Lizzy", 13);
			PresidentialPardonForm p2("This shouldn't exist");
			buro6.signAForm(p2);
			buro6.executeForm(p2);
			//buro6.executeForm(p2);
			std::cout << std::endl;

		}
		catch(std::exception & e)
		{
			std::cout << "\033[31m ERROR \033[0m \n" << e.what() << std::endl;
		}

	}
	
	}
	return (0);
}
