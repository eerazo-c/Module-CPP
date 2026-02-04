/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:14:12 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/03 17:14:13 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#ifndef CONTACT_HPP
# define CONTACT_HPP

//#include "phone.hpp"
#include <iostream>
#include <string>

class Contact{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;

	public: 
		//setters son lo que setean
		void setfirstName(std::string _firstName);
		void setlastName(std::string _lastName);
		void setnickname(std::string _nickname);
		void setphoneNumber(std::string _phoneNumber);
		void setdarkestSecret(std::string _firstName);

		//getters son los recuperan el valor
		std::string getfirstName() const {return(firstName);};
		std::string getlastName() const {return(lastName);};
		std::string getnickname() const {return(nickname);};
		std::string getphoneNumber() const {return(phoneNumber);};
		std::string getdarkestSecret() const {return(darkestSecret);};

};

#endif
