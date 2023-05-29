/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:04:47 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/29 17:53:10 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static bool	valid_params(int argc, char **argv)
{
	if (argc != 2)
		return (error_msg(ARGUMENTS));
	std::ifstream file (argv[1]);
	if (!file.is_open())
		return (error_msg(INVALID_FILE));
	return (true);
}

int main(int argc, char **argv)
{
	BitcoinExchange	btc;
	if (!valid_params(argc, argv))
		return (1);
	std::ifstream	db("data.csv");
	std::ifstream	input_file(argv[1]);

	btc.setDataBase(db);
	btc.setInputFile(input_file);

	
	return (0);
}
