/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:48:32 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/17 14:33:30 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
private:
	Contact	contacts[8];

public:
	void	requirements() const;
	void	add_contact();
	int		read_index();
	void	search();
	void    view_contacts(void) const;
	Phonebook();
	~Phonebook();
};

#endif
