/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 18:15:18 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/19 18:15:35 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap Voldemort("Voldemort");
	ScavTrap Dracula("Dracula");
	FragTrap Lady("Ladygaga");

	Voldemort.attack("Dracula");
	Dracula.takeDamage(0);

	Voldemort.attack("Ladygaga");
	Lady.takeDamage(0);

	Dracula.attack("Voldemort");
	Voldemort.takeDamage(20);

	Dracula.guardGate();
	Lady.attack("Dracula");
	Dracula.takeDamage(30);

	Lady.highFivesGuys();

	return (0);
}
