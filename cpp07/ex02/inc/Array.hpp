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

#include <exception>
#include <iostream>
#include <cstdlib>

template <typename T> 
class Array{
	private:
		T *array;
		unsigned int nSize; 

	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array &obj);

		Array &operator=(const Array &obj);
		T operator[](unsigned int n) const;
		T &operator[](unsigned int n);
		unsigned int size() const;
		
	class ExceptionBounds : public std::exception
	{
		const char* what() const throw(){
			return ("Its index is out of bounds.");
		}
	};
};

#include "Array.tpp"
#endif
