/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:07:06 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/04 23:52:25 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>

PhoneBook::PhoneBook()
{
	ContactNum = 0;
}

void PhoneBook::addContact()
{
	if (ContactNum < contactMax)
	{
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;

		//first name
		std::cout << "Write your First Name: ";
		std::getline(std::cin, firstName);
		if (firstName.empty())
		{
			std::cout << "First Name cannot be empty. Contact not added." << std::endl;
			return ;
		}
		_contact[ContactNum].setfirstName(firstName);

		//last name
		std::cout << "Write your Last Name: ";
		std::getline(std::cin, lastName);

		if (lastName.empty())
		{
			std::cout << "Last Name cannot be empty. Contact not added." << std::endl;
			return ;
		}
		_contact[ContactNum].setlastName(lastName);
	
		//nick name
		std::cout << "Write your Nickname: ";
		std::getline(std::cin, nickname);

		if (nickname.empty())
		{
			std::cout << "Nickname cannot be empaty. Contact not added." << std::endl;
			return ;
		}
		_contact[ContactNum].setnickname(nickname);

		//phone
		std::cout << "Write your Phone Number: ";
		std::getline(std::cin, phoneNumber);

		if (phoneNumber.empty())
		{
			std::cout << "Phone cannot be empty. Contact not added." << std::endl;
			return ;
		}
		else if (phoneNumber.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cout << "Phone Number must contain only digits. Contact not added." << std::endl;
			return ;
		}

		_contact[ContactNum].setphoneNumber(phoneNumber);
	
		//secret
		std::cout << "Write your darkest secret: ";
		std::getline(std::cin, darkestSecret);

		if (darkestSecret.empty())
		{
			std::cout << "Darkest Secret cannot be empty. Contact not added." << std::endl;
			return ;
		}
		_contact[ContactNum].setdarkestSecret(darkestSecret);

		ContactNum++;
		std::cout << "Contact added successfully." << std::endl;
	}
	else
	{
		std::cout << "PhoneBook is full. Deleting the oldest contact." << std::endl;
		for (int i = 0; i < contactMax - 1; i++)
		{
			_contact[i] = _contact[i + 1];
		}
		ContactNum = contactMax - 1;
		addContact();
	}
}

void PhoneBook::displayContact()
{
	std::string imput;
	int index;

	if (ContactNum == 0)
	{
		std::cout << "No contcat no display." << std::endl;
		return ;
	}
	
	std::cout << "|---------------------------------------------|" << std::endl;
	std::cout << "|Index | First Name | Last Name | Nickname    |" << std::endl;
	std::cout << "|---------------------------------------------|" << std::endl;

	for (int i = 0; i < ContactNum; i++)
	{
		std::cout << "(" << i + 1 << ")   | " 
            << std::setw(10) << formatLongS(_contact[i].getfirstName()) << " | "
            << std::setw(10) << formatLongS(_contact[i].getlastName()) << "  | "
            << std::setw(10) << formatLongS(_contact[i].getnickname()) << std::endl;
	}

	std::cout << "Enter the index of the contact to view details: " << std::endl;
	std::getline(std::cin, imput);

	if (imput.empty() || imput.length() != 1 || imput.find_first_not_of("0123456789") != std::string::npos)
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    index = atoi(imput.c_str());

    if (index < 1 || ContactNum < index)
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }

    displayContactDetails(index - 1);
}

void PhoneBook::displayContactDetails(int index)
{
    std::cout << "First Name: " << _contact[index].getfirstName() << std::endl;
    std::cout << "Last Name: " << _contact[index].getlastName() << std::endl;
    std::cout << "Nickname: " << _contact[index].getnickname() << std::endl;
    std::cout << "Phone Number: " << _contact[index].getphoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << _contact[index].getdarkestSecret() << std::endl;
}

std::string PhoneBook::formatLongS(std::string s)
{
	if (s.length() > 10)
		return (s.substr(0, 9) + ".");
	else
		return (s);
}

//aqui

