/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:07:55 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/03 17:07:57 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string>

int main(void)
{
	PhoneBook phoneBook;
	std::string command;
	bool isActive = true;

;	while (isActive)
	{
		std::cout << "Welcome to you PhoneBook 🙆‍♀️" << std::endl;
		std::cout << "Enter a command (ADD, SEARCH, EXIT: )";
		std::getline(std::cin, command);

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
	std::cout << "Bye 👋";
	return (0);
}
