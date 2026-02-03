/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:18:31 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/02 15:20:08 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <algorithm>
#include <ctype.h>
#include <iostream>

int main(int ac, char *av[])
{
	int i = 1;
	int j = 0;

	if (ac >= 2)
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				char upper  = std::toupper(av[i][j]);
				std::cout << upper;
				j++;
			}
			i++;
		}
	}
	else 
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
