/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 15:32:45 by elerazo-          #+#    #+#             */
/*   Updated: 2026/03/18 15:35:08 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "easyfind.hpp"

template <typename T> T easyfind(T &container, int num)
{
	typename T::iterator it;
	return (it);
}

int	main(void)
{
	std::vector<int> containerV = {1, 2, 3, 4, 5};
	std::deque<int> containerD = {1, 2, 3, 4, 5};
	std::list<int> containerL = {1, 2, 3, 4, 5};
	int num = 2;

	easyfind(containerV, num);
	std::cout << "Vector: " << *easyfind(containerV, num) << std::endl;
	easyfind(containerD, num);
	std::cout << "Deque: " << *easyfind(containerD, num) << std::endl;
	easyfind(containerL, num);
	std::cout << "List: " << *easyfind(containerL, num) << std::endl;

	return (0);
}
