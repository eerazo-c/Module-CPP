/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 18:40:41 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/13 18:41:05 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <stdint.h>

typedef struct Data
{
	int edad;
} Data;

class  Serializer
{
	private:
		Serializer();
		~Serializer();
		Serializer(const Serializer &obj);
		Serializer &operator=(const Serializer &obj);

	public:

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};
