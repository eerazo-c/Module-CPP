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
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _Name) : ClapTrap(_Name)
{
	this->Name = _Name;

	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->Attackdamage = 30;

	std::cout << "FragTrap " << this->Name << " Constructor Called" << std::endl;
}

FragTrap::~FragTrap(){	
	std::cout << "FragTrap " << this->Name << " Desconstructor Called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (this->EnergyPoints <= 0)
	{
		std::cout << "FragTrap " << this->Name << " is out of energy!" << std::endl;
        return;
	}
    std::cout << "High-fives :) " << std::endl;
}
