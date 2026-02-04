/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:07:06 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/03 17:07:21 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>

PhoneBook::PhoneBook()
{
	ContactNum = 0;
}

void PhoneBook::add_Contact()
{
	if (ContactNum < contactMax)
	{
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;

		std::cout << "Write your First Name: ";
		std::getline(std::cin, firstName);

		if (firstName.empty())
		{

		}
	}
}
