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
			AForm form1;
			buro1.signAForm(form1);
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
			AForm form2;
			buro2.signAForm(form2);
			std::cout << std::endl;
		
			Bureaucrat buro3("Isra", 151);
			AForm form3;
			buro3.signAForm(form3);
			std::cout << std::endl;

		}
		catch(std::exception & e)
		{
			std::cout << "\033[31m ERROR \033[0m \n" << e.what() << std::endl;
		}
	}
	return (0);
}
