/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:21:02 by elerazo           #+#    #+#             */
/*   Updated: 2026/02/09 20:06:06 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int main()
{
	int i;
	int z = 5;
	Zombie* horde;

	horde = zombieHorde(z, "EliZombie");
	i = 0;
	while (i < z)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return (0);
}
