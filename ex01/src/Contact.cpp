/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:07:41 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/03 17:07:47 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Contact.hpp"

void Contact::setfirstName(std::string _firstName){
	this->firstName = _firstName;
}

void Contact::setlastName(std::string _lastName){
	this->lastName = _lastName;
}

void Contact::setnickname(std::string _nickname){
	this->nickname = _nickname;
}

void Contact::setphoneNumber(std::string _phoneNumber){
	this->phoneNumber = _phoneNumber;
}

void Contact::setdarkestSecret(std::string _darkestSecret){
	this->darkestSecret = _darkestSecret;
}
