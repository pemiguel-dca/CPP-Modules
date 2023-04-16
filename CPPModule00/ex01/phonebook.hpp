/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:48:32 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/16 14:31:52 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook
{
private:
	Contact	contacts[8];

public:
	void	requirements() const;
	void	add_contact();
	size_t	read_index();
	void	search();
	Phonebook();
	~Phonebook();
};

#endif
