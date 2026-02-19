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

int main()
{
	ClapTrap BlackHole("BlackHole");

	BlackHole.attack("Eli");
	BlackHole.attack("Erazo");

/*	BlackHole.takeDamage(5);
	BlackHole.beRepaired(5);
*/
	return (0);
}
