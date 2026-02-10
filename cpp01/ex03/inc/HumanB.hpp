/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 22:04:37 by elerazo           #+#    #+#             */
/*   Updated: 2026/02/09 22:13:28 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "iostream"
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon* weapon;
	
	
	public:
		HumanB(std::string);
		~HumanB();
		void attack();
		void setWeapon(Weapon &weapon);
};

#endif
