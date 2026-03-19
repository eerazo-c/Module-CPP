/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 16:18:32 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/18 16:20:09 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScalarConverter.hpp"
#include <iostream>

ScalarConverter::ScalarConverter() {

}

ScalarConverter::~ScalarConverter() {

}
ScalarConverter::ScalarConverter(const ScalarConverter &obj) {
	*this = obj;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
	if (this != &obj)
		*this = obj;
	return (*this);
}

void convertChar(std::string type)
{
	char c = std::atoi(type.c_str());
	if (type.size() == 1 && c <= 0 && type.c_str()[0] != '0')
	{
		std::cout << "char: " << type.c_str()[0] << std::endl;
		return ;
	}
	if (!type.compare("nan") || !type.compare("inf") || !type.compare("-inf"))
	{
		std::cout << "char: imposible" << std::endl;
		return ;
	}
	if (c >= 32 && c <= 126)
		std::cout << "char : No is char" << std::endl;
}
void ScalarConverter::convert(std::string type)
{
	f_form conv[] = {&convertChar};
	for (unsigned int i = 0; i < 4; i++)
		(*conv[i])(type);
}
