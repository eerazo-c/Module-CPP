/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 17:03:58 by elerazo-          #+#    #+#             */
/*   Updated: 2026/08/27 17:57:06 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include <algorithm>
# include <iostream>
# include <limits.h>
# include <fstream>
# include <sstream>
# include <map>
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
