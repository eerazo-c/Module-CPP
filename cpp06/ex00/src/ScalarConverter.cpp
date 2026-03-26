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
#include <limits>

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

void convertdouble(std::string type)
{
	double num = std::atof(type.c_str());
	if (type.size() == 1 && num <= 0 && static_cast<double>(type.c_str()[0]) != '0')
	{
		std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<float>(type.c_str()[0]) << std::endl;
		return ;
	}
	std::cout << "double: " << num << std::endl;
}

void convertFloat(std::string type)
{
	float number = std::atof(type.c_str());
	if (type.size() == 1 && number <= 0 && static_cast<float>(type.c_str()[0]) != '0')
	{
		std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(type.c_str()[0]) << std::endl;
		return ;
	}
	std::cout << std::fixed << std::setprecision(1) << "float: " << number << "f\n";
}

void convertInt(std::string type)
{
	int num = std::atoi(type.c_str());
	double dnum = std::atof(type.c_str());
	if (type.size() == 1 && num <= 0 && static_cast<int>(type.c_str()[0]) != '0')
	{
		std::cout << "Int: " << static_cast<int>(type.c_str()[0]) << std::endl;
		return ;
	}
	if (!type.compare("nan") || !type.compare("inff") || !type.compare("-inff"))
	{
		std::cout << "Int: imposible" << std::endl;
		return ;
	}
	if (!type.compare("inf") || !type.compare("-inf"))
	{
		std::cout << "Int: imposible" << std::endl;
		return ;
	}
	if (std::numeric_limits<int>::max() < dnum || std::numeric_limits<int>::min() > dnum)
	{	
		std::cout << "Int: imposible" << std::endl;
		return ;
	}
	std::cout << "Int: " << num << std::endl;
}

void convertChar(std::string type)
{
	char c = std::atoi(type.c_str());
	if (type.size() == 1 && c <= 0 && type.c_str()[0] != '0')
	{
		std::cout << "char: '" << type.c_str()[0] << "'" << std::endl;
		return ;
	}
	if (c >= 32 && c <= 126)
		std::cout << "char: '" << c <<  "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void ScalarConverter::convert(std::string type)
{
	f_form conv[] = {&convertChar, &convertInt, &convertFloat, &convertdouble};
	for (unsigned int i = 0; i < 4; i++)
		(*conv[i])(type);
}
