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
#include "Serialization.hpp"

int main(void)
{
	Data ptr;
	Data *samePtr;
	std::cout << "Original ptr: " << &ptr << std::endl;
	uintptr_t keep = Serializer::serialize(&ptr);
	std::cout << "Serializer reult: " << keep << std::endl;
	samePtr = Serializer::deserialize(keep);
	std::cout << "deserialize result: " << samePtr << std::endl;
	return 0;
}
