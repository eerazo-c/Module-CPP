/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 20:37:19 by elerazo-          #+#    #+#             */
/*   Updated: 2026/08/24 21:26:26 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <exception>
#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#include <list>
#include <iterator>
#include <algorithm>

class notFound : public std::exception
{
	const char *what() const throw(){
		return ("Not Found number.");
	}
};

