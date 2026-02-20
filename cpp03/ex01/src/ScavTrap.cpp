/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 20:52:22 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/20 20:54:20 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _Name) : ClapTrap(_Name)
{
	this->Name = _Name;

	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->Attackdamage = 20;

	std::cout << "ScavTrap " << this->Name << " Constructor Called" << std::endl;
}

ScavTrap::~ScavTrap(){	
	std::cout << "ScavTrap " << this->Name << " Desconstructor Called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
