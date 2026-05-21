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

Span::Span() : vect(0), N(0){

}

Span::~Span(){

}

Span::Span(unsigned int n) : N(n){

}

Span::Span(const Span &obj)
{
	*this = obj;
}

Span& Span::operator=(const Span &obj)
{
	*this = obj;
	return (*this); //->agrege est erturn por el compilador quitar luego si falla
}

void Span::addNumber(unsigned int num)
{
	if (vect.size() >= N)
		throw notAdded();

	vect.push_back(num);
/*	for (std::vector<unsigned int>::iterator it = vect.begin(); it != vect.end(); ++it)
	{
		std::cout << "vector :" << *it << std::endl;
	}
	*/
}

void Span::addSoNumber(size_t count)
{
    srand(time(0));

    if (vect.size() + count > N)
        throw notAdded();

    for (size_t i = 0; i < count; i++)
        vect.push_back(rand() % 100);

    for (size_t i = 0; i < vect.size(); i++)
        std::cout << "add so number: " << vect[i] << std::endl;
}

/*void Span::addSoNumber(std::vector<int>::iterator _begin, std::vector<int>::iterator _end)
{
    srand(time(0));
    if (std::distance(_begin,_end) + vect.size() >= N)
        throw notAdded() ;
    else 
    {
        for (std::vector<unsigned int>::iterator it = _begin; it != _end; ++it)
        {
            vect.insert(vect.end(), 1 , rand() % 100);
        }
		for (std::vector<unsigned int>::iterator it = vect.begin(); it != vect.end(); ++it)
		{
			std::cout << "add so number:" <<  << std::endl;
		}
    }
    
}
*/

unsigned int Span::shortestSpan()
{
	if (vect.size() < 2)
		throw shortempty();

	std::sort(vect.begin(), vect.end());

	std::vector<unsigned int>::iterator it1 = vect.begin();
	std::vector<unsigned int>::iterator it2 = vect.begin() + 1;

	unsigned int min = Span::longestSpan();

	for (;it1 != vect.end(); ++it1, ++it2)
	{
		unsigned int tmp;

		if (*it1 > *it2)
			tmp = *it1 - *it2;
		else 
			tmp = *it2 - *it1;

		if (tmp < min)
			min = tmp;
	}
	return (min);
}

unsigned int Span::longestSpan()
{
	if (vect.size() < 2)
		throw longempty();

	std::sort(vect.begin(), vect.end());
	unsigned int it1 = *vect.begin();
	unsigned int it2 = *(vect.end()-1);

	return (it2 - it1);
}

const std::vector<unsigned int> Span::getContainer() const{
	return (vect);

}

std::ostream &operator<<(std::ostream &os, const Span &og)
{
    std::vector<unsigned int> a = og.getContainer();
    for (unsigned long i = 0; i < a.size(); i++)
    {
        os <<  a[i] << " ";
    }
    
    return os;    
}
