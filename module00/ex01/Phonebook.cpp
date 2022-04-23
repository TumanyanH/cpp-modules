#include "./Phonebook.hpp"

Phonebook::Phonebook( void ) : _curr_size(0)
{
    this->_contacts = new Contact[8];
}

void Phonebook::add_contact(t_details details)
{
    int size = this->get_size();

    if (size == 8)
    {
        this->set_size(0);
        size = 0;
    }
    this->_contacts[size].set_index(size + 1);
    this->_contacts[size].set_fn(details.first_name);
    this->_contacts[size].set_ln(details.last_name);
    this->_contacts[size].set_nn(details.nickname);
    this->_contacts[size].set_pn(details.phonenumber);
    this->_contacts[size].set_ds(details.darkest_secret);
    this->_contacts[size].set_exist(true);
    this->set_size(this->get_size() + 1);
}

int Phonebook::get_size()
{
    return (this->_curr_size);
}

void Phonebook::set_size(int size)
{
    this->_curr_size = size;
}

Contact *Phonebook::get_contacts()
{
    return (this->_contacts);
}

Phonebook::~Phonebook()
{
    delete[] this->_contacts;
}