/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 19:33:26 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/07 20:34:36 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->name = name;
}

Zombie::~Zombie(){
	std::cout << "The zombie " << this->name << " is die" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
