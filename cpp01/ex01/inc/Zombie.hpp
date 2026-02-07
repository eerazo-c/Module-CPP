/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:22:03 by elerazo           #+#    #+#             */
/*   Updated: 2026/02/07 21:36:07 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once 

#ifndef ZOMBIE_HPP 
# define ZOMBIE_HPP 

#include <string.h>
#include <iostream>

class Zombie{
	private:
		std::string name;

	public:
		Zombie();
		~Zombie();
		void setName(std::string name);
		void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif
