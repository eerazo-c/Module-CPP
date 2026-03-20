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
#include "Serializerhpp"
#include <iostream>
#include <memory>

Serializer:Serializer) {

}

Serializer:~Serializer) {

}
Serializer:Serializerconst Serializer&obj) {
	*this = obj;
}

Serializer&Serializer:operator=(const Serializer&obj)
{
	if (this != &obj)
		*this = obj;
	return (*this);
}

