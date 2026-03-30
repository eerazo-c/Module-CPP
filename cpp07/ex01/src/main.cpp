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

template <typename T> void inter(T *array, const int len, void (*funcion) (T &))
{
	for (int i = 0; i < len; i++)
		funcion(array[i]);
	std::cout << std::endl;
}

template <typename T> void funcion(T &c)
{
	std::cout << c; 
}

int	main(void)
{
	char	adressArray[] = "Hola, que tal?";
	char 	str[] = "Soy Eli :)";
	int		numbers[] = {1, 2, 3, 4, 5};
	char	letras[] = {'a', 'b', 'c', 'd', 'e'};

	inter(adressArray, 14, funcion);
	std::cout << std::endl;

	inter(str, 10, funcion);
	std::cout << std::endl;

	inter(numbers, 5, funcion);
	std::cout << std::endl;

	inter(letras, 5, funcion);
	std::cout << std::endl;

	return (0);
}
