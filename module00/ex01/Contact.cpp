#include "./Contact.hpp"

Contact::Contact() {}

void Contact::set_index(int index)
{
    this->_index = index;
}

void Contact::set_exist(bool exists)
{
    this->_exists = exists;
}

void Contact::set_fn(std::string fn)
{
    this->_first_name = fn;
}

void Contact::set_ln(std::string ln)
{
    this->_last_name = ln;
}

void Contact::set_nn(std::string nn)
{
    this->_nickname = nn;
}

void Contact::set_pn(std::string pn)
{
    this->_phonenumber = pn;
}

void Contact::set_ds(std::string ds)
{
    this->_darkest_secret = ds;
}

int         Contact::get_index() { return (this->_index); }
bool        Contact::is_exists() { return (this->_exists); }
std::string Contact::get_fn() { return this->_first_name; }
std::string Contact::get_ln() { return this->_last_name; }
std::string Contact::get_nn() { return this->_nickname; }
std::string Contact::get_pn() { return this->_phonenumber; }
std::string Contact::get_ds() { return this->_darkest_secret; }

Contact::~Contact() {}