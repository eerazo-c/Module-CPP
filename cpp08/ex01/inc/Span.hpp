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

class Span
{
	private:
		
		
	public:
		Span();
		~Span();
		Span(unsigned int n);
		Span(const Span &obj);
		Span &operator=(const Span &obj)

		void addNumber();
		void shortestSpan();
		void longestSpan();


	class notAdded : public std::exception
	{
		const char *what() const throw()
		{
			return ("Number not added.");
		}
	}
};

#endif
