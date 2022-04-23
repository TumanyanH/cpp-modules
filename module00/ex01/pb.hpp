#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include "./Phonebook.hpp"

int input_command(Phonebook *pb);
void input_contact(Phonebook *pb);
void display_contacts(Contact *contacts);
void display_contact(Contact contact);


#endif