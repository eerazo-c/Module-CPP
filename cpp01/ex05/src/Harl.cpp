/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:10:01 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/16 12:25:32 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Harl created" << std::endl;
}

Harl::~Harl()
{
    std::cout << "Harl destroyed" << std::endl;
}

void Harl::complain(std::string level)
{
	const int slen = 4;
	std::string levels[slen] = {"debug", "info", "warning", "error"};

	void (Harl::*funtion[slen])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < slen; i++)
	{
		if (level == levels[i])
		{
			(this->*funtion[i])(); //aqui llama a el puntero de fucniones
			return ;
		}
	}
	std::cout << "Unknown level" << std::endl;
}

void Harl::debug(void)
{
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}
