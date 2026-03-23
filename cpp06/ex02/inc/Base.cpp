/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 18:40:41 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/13 18:41:05 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdint>
#include <string>
#include <stdlib.h>
#include <iomanip>

typedef struct Data
{
	int edad;
} Data;

class  Base
{
	private:
		Base();
		~Base();
		Base(const Base &obj);
		Base &operator=(const Base &obj);

	public:

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
