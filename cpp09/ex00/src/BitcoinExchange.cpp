/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 20:32:24 by elerazo-          #+#    #+#             */
/*   Updated: 2026/08/25 21:10:14 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
	*this = obj;
}

BitcoinExchange::~BitcoinExchange(){
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{
	if (this != &obj)
	{
		this->dq_in = obj.getDqIn();
		this->dq_database = obj.getDqDatabase();
	}
	return (*this);
}

void BitcoinExchange::printValue()
{
	for(std::map<int, std::string>::iterator it(dq_in.begin()); it != dq_in.end(); it++)
		std::cout << it->second << "\n";
}

void BitcoinExchange::openReadfile(const char *name_file)
{
	infile.open(name_file);
	database.open("src/data.csv");
	if (!infile.is_open())
	{
		std::string merror = std::string("The file: ") + name_file + " it cannot be open";
		throw std::runtime_error(merror.c_str());
	}
	if (!database.is_open())
		throw std::runtime_error("Database on path 'src/data.csv' not found");
}

static bool checkDate(std::string date)
{
	int year(0);
	int month(0);
	int day(0);

	std::string::size_type line = date.find("-");
	std::istringstream(date.substr(0, line)) >> year;

	if (!(year >= 0 && year <= 4242))
		return (true);
	
	date.erase(0, line + 1);
	line = date.find("-");
	std::istringstream(date.substr(0, line)) >> month;

	if (!(month >= 0 && month <= 12))
		return (true);
	
	date.erase(0, line + 1);
	std::istringstream(date) >> day;
	
	if (!(day >= 1 && day <= 31))
		return (true);
	return (false);
}

bool checkValue(std::string value)
{
	int number(0);
	std::istringstream(value) >> number;
	if (number < 0)
		return (true);
	if (number > 1000)
		return (true);
	return (false);
}

bool BitcoinExchange::checkFile(std::map<int, std::string> &dq_out, unsigned long i)
{
	//check format
	std::string line = dq_in[i];
	std::string::size_type pipe = line.find("|");

	if (pipe == std::string::npos)
	{
		dq_out.insert(std::make_pair(i, "Error: invalid format missing '|'"));
		return (true);
	}
	std::string date = line.substr(0, pipe - 1);
	std::string value = line.substr(pipe + 1, line.size());
	
	//check date
	if (checkDate(date))
	{
		dq_out.insert(std::make_pair(i, "Error: Invalid date " + date));
		return (true);
	}

	//check value
	if (checkValue(value))
	{
		dq_out.insert(std::make_pair(i, "Error: Invalid value " + value));
		return (true);
	}
	return (false);
}

void BitcoinExchange::containData()
{
	std::string line;
	std::string line_db;

	int i = 0;

	while(getline(infile, line))
		dq_in.insert(std::make_pair(i++, line));

	int it = 0;

	while(getline(database, line_db))
		dq_database.insert(std::make_pair(it++, line_db));
}

void trimDate(std::string date, int &year, int &month, int &day)
{
	std::string::size_type line = date.find("-");
	std::istringstream(date.substr(0, line)) >> year;

	date.erase(0, line + 1);
	line = date.find("-");
	std::istringstream(date.substr(0, line)) >> month;

	date.erase(0, line + 1);
	std::istringstream(date) >> day;
}

bool compareDates(int year, int month, int day, std::string date_match)
{
	int year_match(0);
	int month_match(0);
	int day_match(0);

	trimDate(date_match, year_match, month_match, day_match);
	if (year_match >= year)
	{
		if (month_match >= month)
			return (day_match <= day);
	}
	return (true);
}

void BitcoinExchange::conversion(std::map<int, std::string> &dq_out, unsigned long i)
{



}

void BitcoinExchange::writeData(std::map<int, std::string> &dq_out)
{
	bool fill = false;

	for (unsigned long i(1); i < dq_in.size(); i++)
	{
		fill = checkFile(dq_out, i);
		if (!fill)
			conversion(dq_out, i);
	}
	for (std::map<int, std::string>::iterator it(dq_out.begin()); it != dq_out.end(); it++)
		std::cout << it->second << "\n";
}

std::map<int, std::string> BitcoinExchange::getDqIn() const
{
	return (this->dq_in);
}

std::map<int, std::string> BitcoinExchange::getDqDatabase() const
{

	return (this->dq_database);
}
