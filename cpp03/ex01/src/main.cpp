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
	ClapTrap Voldemort("Voldemort");
	ScavTrap Dracula("Dracula");

	Voldemort.attack("Dracula");
	Dracula.takeDamage(8);

	Dracula.attack("Voldemort");
	Voldemort.takeDamage(8);

	Voldemort.beRepaired(2);
	Dracula.beRepaired(2);

	return (0);
}
