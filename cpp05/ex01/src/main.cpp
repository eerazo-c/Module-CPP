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
#include <exception>
#include <iostream>

int main()
{
	{
		try{
			std::cout << "\033[32m Test \033[0m " << std::endl;
			Bureaucrat buro1("Eli", 1);
			Form form1;
			buro1.signForm(form1);
			std::cout << std::endl;
		}
		catch(std::exception & e)
		{
			std::cout << "\033[31m ERROR \033[0m \n" << e.what() << std::endl;
		}
	}

	{
		try {
			std::cout << "\033[32m Varied test \033[0m " << std::endl;
			Bureaucrat buro2("Dei", 2);
			Form form2;
			buro2.signForm(form2);
			std::cout << std::endl;
		
			Bureaucrat buro3("Isra", 151);
			Form form3;
			buro3.signForm(form3);
			std::cout << std::endl;

		}
		catch(std::exception & e)
		{
			std::cout << "\033[31m ERROR \033[0m \n" << e.what() << std::endl;
		}
	}
	return (0);
}
