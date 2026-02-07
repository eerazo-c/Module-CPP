/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 19:37:23 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/07 16:40:08 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"
//new es un operador que crea memoria dinamica

Zombie* newZombie(std::string name)
{
	Zombie* zombieDirec = new Zombie(name);

	return zombieDirec;
}
