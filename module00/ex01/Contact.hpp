#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>
# include <iostream>

class Contact {

private : 
    int         _index;
    bool        _exists;
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phonenumber;
    std::string _darkest_secret;

public :
    Contact();
    ~Contact();

    int         get_index();
    bool        is_exists();
    std::string get_fn();
    std::string get_ln();
    std::string get_nn();
    std::string get_pn();
    std::string get_ds();

    void set_index(int index);
    void set_exist(bool exists);
    void set_fn(std::string fn);
    void set_ln(std::string ln);
    void set_nn(std::string nn);
    void set_pn(std::string pn);
    void set_ds(std::string ds);
};

#endif