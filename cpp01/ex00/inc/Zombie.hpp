/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 19:31:10 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/07 16:50:50 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	private:
		std::string name;

	public:
		Zombie(std::string name);
		~Zombie();

		void announce( void ); //imprime
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
