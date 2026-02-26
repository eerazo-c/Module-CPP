/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 14:27:37 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/23 14:28:12 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#ifndef Dog_HPP
# define Dog_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain *dogBrain;
	public:
		Dog();
		Dog(Dog &obj);
		Dog &operator=( const Dog &obj);
		~Dog();

	void makeSound(void) const;
	Brain *getBrain(void) const;
};

#endif
