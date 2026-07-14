#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		count; // used for displaying in search
		int		next_index; // used for knowing what contact to edit later
	public:
		PhoneBook();
		bool	add_to_contact(void);
		void	search_contact(void);
		void	display_saved_contact(void);
		void	display_contact(int index);
};

int		check_exit(std::string check);

#endif
