/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 14:24:30 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/23 14:26:41 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *catBrain;

	public:
		Cat();
		Cat( const Cat &obj);
		Cat &operator=( const Cat &obj);
		~Cat();

		void makeSound(void) const;
		Brain *getBrain(void) const;
};

#endif
