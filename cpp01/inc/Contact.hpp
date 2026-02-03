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
//#include "phone.hpp"
#include <iostream>

class Contact{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
	public:
		Contact(void);
		~Contact(void);
};
