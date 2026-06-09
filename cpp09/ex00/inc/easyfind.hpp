/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:25:31 by elerazo-          #+#    #+#             */
/*   Updated: 2026/04/01 16:25:57 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <exception>
#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <list>
#include <iterator>
#include <algorithm>

class notFound : public std::exception
{
	const char *what() const throw(){
		return ("Not Found number.");
	}
};

template <typename T> typename T::iterator easyfind(T &container, int num)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), num);
	//std::cout << "container: " << *it << "numero: " << num << std::endl;
	if (it == container.end())
		throw notFound();
	return (it);
}

#endif
