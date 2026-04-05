/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 20:53:40 by elerazo-          #+#    #+#             */
/*   Updated: 2026/04/02 20:56:24 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SPAN_HPP
# define SPAN_HPP

#include <exception>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

class Span
{
	private:
		unsigned int max;
		std::vector<int> num;

	public:
		Span();
		~Span();
		Span(unsigned int n);
		Span(const Span &obj);
		Span &operator=(const Span &obj);

		void addNumber(int _num);
		short shortestSpan();
		long longestSpan();


	class fullSpan : public std::exception
	{
		const char *what() const throw()
		{
			return ("Span is full.");
		}
	};

	class noSpan : public std::exception
	{
		const char *what() const throw()
		{
			return ("Not enough numbers to find a span.");
		}
	};

};

#endif
