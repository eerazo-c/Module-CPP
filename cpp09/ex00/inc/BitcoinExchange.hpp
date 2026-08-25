/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 17:03:58 by elerazo-          #+#    #+#             */
/*   Updated: 2026/08/25 20:51:11 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include <algorithm>
# include <iostream>
# include <limits.h>
# include <fstream>
# include <sstream>
# include <map>

class BitcoinExchange 
{
	private:
		std::ifstream 			infile;
		std::ifstream 			database;
		std::map<int, std::string>	dq_in;
		std::map<int, std::string>	dq_database;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &obj);
		~BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange &obj);

		void	printValue();	
		void	openReadfile(const char *name_file);
		bool	checkFile(std::map<int, std::string> &dq_out, unsigned long i);
		void	containData();
		void	conversion(std::map<int, std::string> &dq_out, unsigned long i);
		void	writeData(std::map<int, std::string> &dq_out);

		std::map<int, std::string> getDqIn() const;
		std::map<int, std::string> getDqDatabase() const;
};
