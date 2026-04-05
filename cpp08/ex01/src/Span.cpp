/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 21:11:01 by elerazo-          #+#    #+#             */
/*   Updated: 2026/04/02 21:15:04 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Span.hpp"

Span::Span() : max(0)
{

}

Span::~Span(){

}

Span::Span(unsigned int n) : max(n)
{

}

Span::Span(const Span &obj)
{
	*this = obj;
}

Span &Span::operator=(const Span &obj)
{
	if (this != &obj)
	{
		this->max = obj.max;
		this->num = obj.num;
	}
	return (*this);
}

void Span::addNumber(int _num)
{
	if (num.size() >= max)
		throw fullSpan();
	num.push_back(_num);
}

short Span::shortestSpan()
{
	if (num.size() < 2)
		throw noSpan();

	std::vector<int> temp = num;
	std::sort(temp.begin(), temp.end());

	int shortest = temp[1] - temp[0];
	for (size_t i = 1; i < temp.size() - 1; i++)
	{
		int diffe = temp[i + 1] - temp[i];
		if (diffe < shortest)
			shortest = diffe;
	}
	return (shortest);
}

long Span::longestSpan()
{
	if (num.size() < 2)
		throw noSpan();

	int min = *std::min_element(num.begin(), num.end());
	int max = *std::max_element(num.begin(), num.end());

	return (max - min);
}
