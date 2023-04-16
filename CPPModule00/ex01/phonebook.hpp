/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:48:32 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/16 22:31:07 by pemiguel         ###   ########.fr       */
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
	int		read_index();
	void	search();
	void    view_contacts(void) const; 
	Phonebook();
	~Phonebook();
};

#endif
