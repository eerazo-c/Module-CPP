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

class HumanB
{
	private:
		std::string name;
		Weapon* weapon;
	
	public:
		void attack();
}

#endif
