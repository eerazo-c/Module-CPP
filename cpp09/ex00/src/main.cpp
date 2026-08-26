/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 15:32:45 by elerazo-          #+#    #+#             */
/*   Updated: 2026/08/26 17:15:29 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "BitcoinExchange.hpp"

static int openFiles(char **av, BitcoinExchange &obj)
{
	try
	{
		obj.openReadfile(av[1]);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << "\n";
			return 1;
	}

	return 0;
}

int saveData(BitcoinExchange &obj)
{
	std::map<int, std::string> dq_out;
	obj.containData();
	obj.writeData(dq_out);

	return 0;
}

int main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cout << "\033[31m ERROR: \033[0mcould not open file.\n"  << std::endl;
		return (1);
	}

	BitcoinExchange exchange;
	if(openFiles(av, exchange))
		return (1);
	if (saveData(exchange))
		return (1);
	return (0);
}
