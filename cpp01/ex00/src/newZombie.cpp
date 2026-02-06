/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 19:37:23 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/05 19:38:51 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.h"
#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie* zom = new(name);

	delete zom;
	zom = NULL;
}
