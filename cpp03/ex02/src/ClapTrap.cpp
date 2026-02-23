/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 18:39:50 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/19 18:40:11 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name){
	this->Name = Name;
	
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->Attackdamage = 0;
	
	std::cout << "ClapTrap " << this->Name << " Constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << this->Name << " Destructor called " << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPoints == 0)
	{
		std::cout << "ClapTrap " << this->Name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->Attackdamage << " points of damage!" << std::endl;
	this->EnergyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoints <= amount || this->HitPoints == 0)
	{
		std::cout << "ClapTrap " << this->Name << " is dead! " << std::endl;
		this->HitPoints = 0;
		return ;
	}
	std::cout << "ClapTrap " << this->Name << " take " << amount << ", damage!" << std::endl;
	this->HitPoints -= amount; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoints == 0)
	{
		std::cout << "ClapTrap " << this->Name << " is out of energy! ";
		return ;
	}
	this->EnergyPoints -= 1;
	std::cout << "ClapTrap " << this->Name << " it is being repaired " << amount << ", hit Points" << std::endl;
	this->HitPoints += amount;
}
