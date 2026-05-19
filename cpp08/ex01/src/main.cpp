/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 15:32:45 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/18 15:35:08 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Span.hpp"
#include <exception>

int main()
{
	try{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		//sp.addNumber(15);
	}
	catch(std::exception & e)
	{
		std::cout << "\033[31m ERROR \033[0m \n" << e.what() << std::endl;
	}
//	std::cout << sp.shortestSpan() << std::endl;
//	std::cout << sp.longestSpan() << std::endl;

	return 0;
}
