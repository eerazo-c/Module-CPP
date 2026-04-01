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

template <typename T> T easyfind(T &container, int num);

class notFound : public std::exception
{
	const char *what() const throw(){
		return ("Not Found number.");
	}
};

#endif
