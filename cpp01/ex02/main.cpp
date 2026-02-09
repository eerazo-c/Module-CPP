/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:18:33 by elerazo           #+#    #+#             */
/*   Updated: 2026/02/09 20:46:14 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN.";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	//direcciones
	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl; //puntero 
	std::cout << &stringREF << std::endl; //referencia

	std::cout << std::endl;

	//valores
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl; //puntero 
	std::cout << stringREF << std::endl; //referencia


	return 0;
}
