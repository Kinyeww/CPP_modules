#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string.h>

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		count; // used for displaying in search
		int		next_index; // used for knowing what contact to edit later
	public:
		PhoneBook();
		bool	add_to_contact();
		void	search_contact();
		void	display_saved_contact();
		void	display_contact(int index);
};

#endif
