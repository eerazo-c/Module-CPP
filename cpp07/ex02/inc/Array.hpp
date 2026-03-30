/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 18:40:41 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/13 18:41:05 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

templates <typename T>
class Array{
	private:

	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array &obj);

		Array &operador=(const Array &obj);
		T operador[](unsigned int n) const;
		T &operador[](unsigned int n);
		unsigned int size() const;
};

#endif
