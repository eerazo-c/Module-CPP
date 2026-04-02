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
#include <exception>

int	main(void)
{
	std::vector<int> containerV;
	containerV.push_back(1);
	containerV.push_back(2);
	containerV.push_back(3);
	containerV.push_back(4);
	std::deque<int> containerD;
	containerD.push_back(1);
	containerD.push_back(2);
	containerD.push_back(3);
	containerD.push_back(4);
	std::list<int> containerL;
	containerL.push_back(1);
	containerL.push_back(2);
	containerL.push_back(3);
	containerL.push_back(4);
	int num = 4;

	try {
		easyfind(containerV, num);
		std::cout << "Vector: " << *easyfind(containerV, num) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try{
		easyfind(containerD, num);
		std::cout << "Deque: " << *easyfind(containerD, num) << std::endl;
	}

	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		easyfind(containerL, num);
		std::cout << "List: " << *easyfind(containerL, num) << std::endl;
	}

	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
