/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 22:07:17 by elerazo           #+#    #+#             */
/*   Updated: 2026/02/09 22:07:23 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB(){

}

void HumanB::attack()
{
	if (!weapon)
	{
		std::cout << this->name 
		<< " He has no weapons to attack with! "
		<< std::endl;
		return ;
	}
	else
	{
		std::cout << this->name
		<< " attack with their "
		<< this->weapon->getType()
		<< std::endl;
	}
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
