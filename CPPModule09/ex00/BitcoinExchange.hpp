/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:05:48 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/30 12:47:10 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>

/*Error msgs*/
#define ERROR "Error: "
#define ARGUMENTS "Program MUST have one argument!"
#define INVALID_FILE "Invalid file!"
#define DATE_FORMAT "Invalid date format!"
#define YEAR "Since bitcoin was created in 2009, year must be between 2009 and 2023"
#define INVALID_DATE "That date does not exist!"
#define INVALID_FORMAT "Format should be as follows, 'date | value'"
#define INVALID_VALUE "Value must be between 0 and 1000!"

static inline bool error_msg(std::string msg)
{
	std::cerr << ERROR + msg << std::endl;
	return (false);
}

class BitcoinExchange
{
private:
	std::map<std::string, float>	db;
public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &other);
	BitcoinExchange& operator = (const BitcoinExchange &other);
	void	setDataBase(std::ifstream &db_file);
	bool	validateFormat(std::string &line);
	void	getExchangeRate(std::string &line);
	float	getValue(std::string &line);
	float	getValueTimesExchangeRate(const std::string &date, std::string &line);
};

int		Stoi(std::string sLiteral);
float	Stof(std::string sLiteral);

#endif
