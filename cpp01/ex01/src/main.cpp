/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:21:02 by elerazo           #+#    #+#             */
/*   Updated: 2026/02/07 21:44:25 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int main()
{
	int i;
	Zombie* horde;

	horde = zombieHorde(5, "EliZombie");
	i = 0;
	while (i < 5)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return (0);
}
