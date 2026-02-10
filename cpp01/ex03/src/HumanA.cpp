/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 22:07:39 by elerazo           #+#    #+#             */
/*   Updated: 2026/02/09 22:07:41 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{

}

HumanA::~HumanA(){

}

void HumanA::attack()
{
	std::cout << this->name 
		<< " attacks with their "
		<< this->weapon.getType()
		<< std::endl;
}
