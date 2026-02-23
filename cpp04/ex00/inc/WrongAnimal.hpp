/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 14:32:15 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/23 14:35:32 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		~WrongAnimal();

		void	makeSound( void ) const;
};

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		
		void	makeSound( void ) const;
};

#endif
