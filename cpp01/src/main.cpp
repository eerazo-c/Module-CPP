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
//#include "Contact.hpp"
#include <iostream>
#include <string>

class Contact{
	public:
		Contact(void);
		~Contact(void);
};

Contact::Contact(){

	std::string firstname;
	std::string lastname;
	std::string nickname;

	std::cout << "First name: ";
	std::cin >> firstname;

	std::cout << "Last name: ";
	std::cin >> lastname;

	std::cout << "Nickname: ";
	std::cin >> nickname;

}
int main(void)
{
	Contact p1; 

	return (0);
}
