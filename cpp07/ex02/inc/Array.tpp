/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 16:42:49 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/30 16:42:53 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array() : array(0), nSize(0)
{
	std::cout << "Default Array Created with" << nSize << std::endl;
}

template <typename T>
Array<T>::~Array(){
	delete[] (this->array);
	std::cout << "Delete Array" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : array(new T), nSize(n)
{
	std::cout << "Array Created with " << nSize << std::endl;
}

template <typename T>
Array<T>::Array(const Array<T> &obj){
	std::cout << "Copy assignament Array" << std::endl;
	*this = obj;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &obj)
{
	if (this != &obj)
	{
		this->nSize = obj.size();
		this->array = new T[size()];
		for (unsigned int i = 0; i < obj.size(); i++)
			this->array[i] = obj.array[i];
	}
	return (*this);
}

template <typename T>
T Array<T>::operator[](unsigned int n) const
{
	if (nSize <= n)
		throw ExceptionBounds();
	return (array);
}

template <typename T>
T &Array<T>::operator[](unsigned int n)
{
	if (n > this->nSize)
		throw ExceptionBounds();
	return (array[n]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return(this->nSize);
}

#endif
