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
#include "inter.hpp"
#include <ostream>
#include <stdexcept>

template <typename T> void inter(T *array, const int len, void (*funcion) (T))
{
	while (*array)
	{
		funcion(*array);
		array++;
	}
	std::cout << std::endl;
	std::cout << "len es: " << len << std::endl;
}

void funcion(char c)
{
	std::cout << c ;
}

int main( void )
{
	char adressArray[] = "Hola, que tal";
	int len = std::strlen(adressArray); 
	

	inter(adressArray, len, funcion);
	std::cout << std::endl;
	return 0;
}
