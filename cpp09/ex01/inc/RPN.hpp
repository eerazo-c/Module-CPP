/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 17:03:58 by elerazo-          #+#    #+#             */
/*   Updated: 2026/08/28 15:22:53 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include <iostream>
# include <cstdlib>
# include <sstream>
# include <cstdio>
#include <list>

typedef std::string string;
typedef std::list<int> i_vec;
typedef std::list<string> s_vec;

class RPN
{
	private:
	public:
		RPN();
		RPN(const RPN &obj);
		~RPN();
		RPN &operator=(const RPN &obj);

		void	performOperation(s_vec &cont);	
};

bool findAllowedChars(std::string str, std::string allowed);
void stoi_vec(s_vec str, i_vec &cont);
