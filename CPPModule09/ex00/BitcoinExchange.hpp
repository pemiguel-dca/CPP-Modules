/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:05:48 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/29 17:56:57 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <set>

/*Error msgs*/
#define ERROR "Error: "
#define ARGUMENTS "Program MUST have one argument!"
#define INVALID_FILE "Invalid file!"

static inline bool error_msg(std::string msg)
{
	std::cerr << ERROR + msg << std::endl;
	return (false);
}

class BitcoinExchange
{
private:
	std::set<std::string>	db;
	std::set<std::string>	input_file;

public:
	BitcoinExchange();
	~BitcoinExchange();
	void	setDataBase(std::ifstream &db_file);
	void	setInputFile(std::ifstream &input_file);
	bool	validateDate(std::string line);
	void	getExchangeRate();
};

#endif
