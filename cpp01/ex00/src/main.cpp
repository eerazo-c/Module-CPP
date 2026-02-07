/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 19:32:12 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/07 20:37:58 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int main()
{
	Zombie *z1 = newZombie("Juanita");
	Zombie *z2 = newZombie("Claus");

	z1->announce();
	delete z1;

	std::cout << "----" << std::endl;

	z2->announce();
	delete z2;

	std::cout << "----" << std::endl;
	randomChump("Ana");

	return (0);
}
