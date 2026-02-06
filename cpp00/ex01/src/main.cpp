/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:07:55 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/04 23:26:00 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <ostream>
#include <string>

int main(void)
{
	PhoneBook phoneBook;
	std::string command;
	bool isActive = true;

	while (isActive)
	{
		std::cout << "Welcome to you PhoneBook 📞" << std::endl;
		std::cout << "Enter a command (ADD ✍️, SEARCH 🔍, EXIT 🚶): ";
		if (!std::getline(std::cin, command))
		{
			std::cout << std::endl;
			break ;
		}
		if(command == "ADD")
		{
			phoneBook.addContact();
		}
		else if(command == "SEARCH")
		{
			phoneBook.displayContact();
		}

		else if(command == "EXIT")
			break ;

		else 
			std::cout << "Invalid command :(" << std::endl;
	}
	std::cout << "Bye 👋" << std::endl;
	return (0);
}
