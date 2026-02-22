/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 19:03:01 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/20 19:03:25 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string _Name);
		~ScavTrap();

		void guardGate();
		void attack(const std::string& target);
};

#endif 
