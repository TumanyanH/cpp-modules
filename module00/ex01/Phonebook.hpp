#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "./Contact.hpp"

typedef struct s_details {
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phonenumber;
    std::string darkest_secret;
} t_details;

class Phonebook
{
public :
    Phonebook( void );
    ~Phonebook();

    void add_contact(t_details details);
    Contact *get_contacts();
    int get_size();
    void set_size(int size);

private :
    Contact *_contacts;
    int _curr_size;

};

#endif