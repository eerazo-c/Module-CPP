/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:13:21 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/04 23:52:09 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once //para que lo ejecute solo una vez

#ifndef  PHONEBOOK_HPP
# define PHONEBOOK_HPP

//BIBLIOTECAS
#include <iostream>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "Contact.hpp"

class PhoneBook {
	private:
		static const int contactMax = 8;
		Contact _contact[contactMax];
		int ContactNum;

	public:
		PhoneBook();
		void addContact();
		void displayContact();
		void displayContactDetails(int index);
		std::string formatLongS(std::string s);
};

#endif
