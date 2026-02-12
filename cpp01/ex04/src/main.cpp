/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 20:05:05 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/12 23:20:30 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{		
		std::cout << "\033[31m" "Error" << std::endl;
		return 1;
	}

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if (s1.empty())
	{
		std::cout << "\033[31m" "Error: s1 is empty" << std::endl; 
		return 1;
	}

	//abrir archivo de entrada
	std::ifstream file(filename.c_str());
	if (!file.is_open())
	{
		std::cout << "\033[31m" "Error: cannot open imput file " << std::endl;
		return 1;
	}

	std::string conte = redFile(file);
	std::string remplaced = remplaceAll(conte, s1, s2);
	
	//crea nombre de archivo de salida
	std::string out_filename = filename + ".replace";

	//abre el archivo de salida
	std::ofstream out(out_filename.c_str());
	if (!out.is_open())
	{
		std::cout << "\033[31m" "Error: cannot created output file" << std::endl;
		return 1;
	}

	out << remplaced;
	file.close();
	out.close();

	std::cout << "\033[32m" "Files opened successfully" << std::endl; 
	return 0;
}
