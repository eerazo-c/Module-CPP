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

int main()
{
	std::cout << "ClapTrap:" << std::endl;
	ClapTrap Voldemort("Voldemort");
	ClapTrap Fiona("Fiona");

	std::cout << "ScavTrap:" << std::endl;
	ScavTrap Dracula("Dracula");
	ScavTrap Gary("Gary");

	std::cout << "Ataques:" << std::endl;

	Voldemort.attack("Dracula");
	Dracula.takeDamage(8);

	Fiona.attack("Gary");
	Gary.takeDamage(8);

	Dracula.attack("Voldemort");
	Voldemort.takeDamage(8);

	Gary.attack("Fiona");
	Fiona.takeDamage(8);

	Voldemort.beRepaired(2);
	Fiona.beRepaired(2);
	Dracula.beRepaired(2);
	Gary.beRepaired(2);

	return (0);
}
