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
#include "Intern.hpp"

int main()
{
	{
		try{
			std::cout << "\033[32m Interns \033[0m " << std::endl;
			Intern someRandomIntern;
			Bureaucrat bur1("Eli", 1);

			AForm *scf;
			AForm *rrf;
			AForm *ppf;

			scf = someRandomIntern.makeForm("Shrubbery Creation Form", "Bender");
			rrf = someRandomIntern.makeForm("Robotomy Request Form", "Bender");
			ppf = someRandomIntern.makeForm("Presidential Pardon Form", "Bender");

			bur1.signAForm(*scf);
			bur1.signAForm(*rrf);
			bur1.signAForm(*ppf);

			bur1.executeForm(*scf);
			bur1.executeForm(*rrf);
			bur1.executeForm(*ppf);

			delete scf;
			delete rrf;
			delete ppf;

		}
		catch(std::exception & e)
		{
			std::cout << "\033[31m ERROR \033[0m \n" << e.what() << std::endl;
		}
	}

	return (0);
}
