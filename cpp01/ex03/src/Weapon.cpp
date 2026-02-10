/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 21:00:08 by elerazo           #+#    #+#             */
/*   Updated: 2026/02/09 21:00:22 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Weapon.hpp"

//guarda: un tipo de texto
//permite: leer y cambiar
Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon()
{

}

std::string Weapon::getType() const
{
	return type;
}

void Weapon::setType(std::string _type)
{
	type = _type;
	//return (type);
}
