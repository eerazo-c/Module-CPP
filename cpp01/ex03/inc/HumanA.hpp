/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 21:59:12 by elerazo           #+#    #+#             */
/*   Updated: 2026/02/09 22:12:09 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#ifndef HUMANA_HPP 
# define HUMANA_HPP 

class HumanA
{
	private:
		std::string name;
		Weapon* weapon;

	public:
		void attack();
}
#endif
