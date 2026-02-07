/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 21:23:28 by elerazo           #+#    #+#             */
/*   Updated: 2026/02/07 21:36:33 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i;
	Zombie* horde;

	if (N <= 0)
		return (NULL);

	horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		horde[i].setName(name);
		i++;
	}
	return (horde);
}
