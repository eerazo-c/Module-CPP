/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 20:53:40 by elerazo-          #+#    #+#             */
/*   Updated: 2026/04/02 20:56:24 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <exception>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <stack>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <complex>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack &obj);
		MutantStack<T> &operator=(const MutantStack &obj);

		typedef typename std::stack<T>::containerStack::iterator it;
		it begin();
		it end();
};

#include "MutantStack.Tpp"

#endif
