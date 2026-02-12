/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redfile.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 19:53:34 by elerazo           #+#    #+#             */
/*   Updated: 2026/02/12 23:12:33 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Sed.hpp"

std::string remplaceAll(std::string conte, std::string s1, std::string s2)
{
	std::string result;
	size_t i = 0;

	while (i < conte.length())
	{
		if (conte.compare(i, s1.length(), s1) == 0)
		{
			result += s2;
			i += s1.length();
		}
		else
		{
			result += conte[i];
			i++;
		}
	}
	return (result);
}

std::string redFile(std::ifstream &file)
{
	std::string conte;
	std::string line;

	while (std::getline(file, line))
	{
		conte += line;
		conte += '\n';
	}
	//std::cout << conte << std::endl;
	return (conte);
} 
