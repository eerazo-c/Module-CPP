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

int	main(void)
{
	std::vector<int> containerV;
	containerV.push_back(1);
	std::deque<int> containerD;
	containerD.push_back(2);
	std::list<int> containerL;
	containerL.push_back(3);
	int num = 2;

	easyfind(containerV, num);
	std::cout << "Vector: " << *easyfind(containerV, num) << std::endl;
	easyfind(containerD, num);
	std::cout << "Deque: " << *easyfind(containerD, num) << std::endl;
	easyfind(containerL, num);
	std::cout << "List: " << *easyfind(containerL, num) << std::endl;

	return (0);
}
