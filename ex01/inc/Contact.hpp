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
#ifndef CONTACT_HPP
# define CONTACT_HPP

//#include "phone.hpp"
#include <iostream>

class Contact{
	private:
		std::string firstName;
		std::string lastnName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		void setfirstName(std::string _firstName);
		void setlastName(std::string _lastName);
		void setnickname(std::string _nickname);
		void setphoneNumber(std::string _phoneNumber);
		void setdarkestSecret(std::string _firstName);

		void getfirstName() const {return(firstName)};
		void getlastName() const {return(lastnName)};
		void getnickname() const {return(nickname)};
		void getphoneNumber() const {return(phoneNumber};
		void getdarkestSecret() const {return(darkestSecret)};

};

#endif
