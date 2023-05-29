/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:06:15 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/29 22:45:17 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

void	BitcoinExchange::setDataBase(std::ifstream &db_file)
{
	std::string line;
	while (getline(db_file, line))
		this->db.push_back(line);
}

void	BitcoinExchange::setInputFile(std::ifstream &input_file)
{
	std::string line;
	while (getline(input_file, line))
		this->input_file.push_back(line);
}

/*
2011-01-03 | 3
2011-01-03 | 2
2011-01-03 | 1
2011-01-03 | 1.2
*/

bool	BitcoinExchange::validateFormat(std::string &line)
{
	if (line.at(4) != '-' || line.at(7) != '-')
		return (error_msg(DATE_FORMAT));
	int	year = Stoi(line.substr(0, 4));
	int	month = Stoi(line.substr(5, 7));
	int	day = Stoi(line.substr(8, 10));
	
	if(year >= 2009 && year <= 2023)
	{
		while (true)
		{
			if ((month == 1 || month == 3 || month == 5 || month == 7|| month == 8 || month == 10 || month == 12) && (day > 0 && day <= 31))
				break ;
			else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day > 0 && day <= 30))
				break ;
			else if (month == 2)
			{
				if ((year % 400 == 0 || (year %100 != 0 && year % 4== 0)) && (day > 0 && day <= 29))
					break ;
			}
			return (error_msg(INVALID_DATE));
		}
	}
	else
		return (error_msg(YEAR));
	/*Validate value now*/
	size_t pipePos = line.find('|');
	if (pipePos == std::string::npos || line.at(pipePos - 1) != ' '
		|| line.at(pipePos + 1) != ' ')
		return (error_msg(INVALID_FORMAT));
	std::string valueString = line.substr(pipePos + 2); //skip pipe and space
	if (valueString.find_first_not_of("0123456789.-") != std::string::npos)
		return (error_msg(INVALID_FORMAT));
	if (Stof(valueString) < 0 || Stof(valueString) > 1000)
		return (error_msg(INVALID_VALUE));
	return (true);
}

void	BitcoinExchange::getExchangeRate()
{
	for (std::vector<std::string>::iterator it = this->input_file.begin(); it != this->input_file.end(); it++)
	{
		if (!this->validateFormat(*it))
			continue ;
	}
}

int	Stoi(std::string sLiteral)
{
	std::stringstream ss;
	int res;

	ss << sLiteral;
	ss >> res;
	return (res);
}

float	Stof(std::string sLiteral)
{
	std::stringstream ss;
	float res;

	ss << sLiteral;
	ss >> res;
	return (res);
}