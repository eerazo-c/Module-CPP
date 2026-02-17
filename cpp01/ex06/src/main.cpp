/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 20:05:05 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/10 20:05:20 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string argu = av[1];
		Harl *harl = new Harl();

		harl->complain(argu);
    	delete harl;
	}
	else {
		std::cout << "Usage: ./harlFilter \"level\" " << std::endl;
        std::cout << "Levels : \"DEBUG\", \"INFO\", \"WARNING\", \"ERROR\" " << std::endl;
	}
    return 0;
}
