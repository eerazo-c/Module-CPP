/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 15:38:37 by elerazo-          #+#    #+#             */
/*   Updated: 2026/06/01 15:39:08 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(){

}

template<typename T>
MutantStack<T>::~MutantStack(){

}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &obj) : std::stack<T>(obj){

}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &obj)
{
	if (this != obj)
		return (*this);
}

//iteratoors
template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (std::stack<T>::c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (std::stack<T>::c.end());
}

