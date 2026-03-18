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

void ScalarConverter::convert(std::string type)
{
	std::cout << type << std::endl;
}
