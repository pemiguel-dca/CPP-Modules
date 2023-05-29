/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:06:15 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/29 17:57:48 by pemiguel         ###   ########.fr       */
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
		this->db.insert(line);
}

void	BitcoinExchange::setInputFile(std::ifstream &input_file)
{
	std::string line;
	while (getline(input_file, line))
	{
		std::cout << "Linha: " << line << std::endl;
		this->input_file.insert(line);
	}
}

bool	BitcoinExchange::validateDate(std::string line)
{

}

void	BitcoinExchange::getExchangeRate()
{
	std::set<std::string>::iterator it;
}
