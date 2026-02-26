/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:08:51 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/26 19:08:51 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal(const AAnimal &obj);
		AAnimal &operator=(const AAnimal &obj);
	
		AAnimal(std::string type);
		virtual ~AAnimal() = 0;

		virtual void makeSound(void) const;
		std::string getType(void) const;
};

#endif
