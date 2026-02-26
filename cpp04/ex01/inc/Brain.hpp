/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 16:13:27 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/26 16:14:04 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	private:
		std::string *ideas;

	public:
		Brain();
		Brain(Brain &obj);
		Brain &operator=(const Brain &obj);
		~Brain();

		std::string *getIdeas();
};

#endif
