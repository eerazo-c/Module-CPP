/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializercpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 16:18:32 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/18 16:20:09 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Serialization.hpp"

Serializer::Serializer() {

}

Serializer::~Serializer() {

}
Serializer::Serializer(const Serializer &obj) {
	*this = obj;
}

Serializer &Serializer::operator=(const Serializer&obj)
{
	if (this != &obj)
		*this = obj;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t p = reinterpret_cast<uintptr_t>(ptr);
	return (p);
}

Data *Serializer::deserialize(uintptr_t raw)
{
	Data *r = reinterpret_cast<Data *>(raw);
	return (r);
}
