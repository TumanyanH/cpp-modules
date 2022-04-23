#include "./pb.hpp"

void input_contact(Phonebook *pb)
{
    t_details dets;

    std::cout << "Enter firstname : ";
    getline(std::cin, dets.first_name);
    std::cout << "Enter lastname : ";
    getline(std::cin, dets.last_name);
    std::cout << "Enter nickname : ";
    getline(std::cin, dets.nickname);
    std::cout << "Enter phonenumber : ";
    getline(std::cin, dets.phonenumber);
    std::cout << "Enter darkest_secret : ";
    getline(std::cin, dets.darkest_secret);
    pb->add_contact(dets);
}

void display_contacts(Contact *contacts)
{
    int i = 0;

    std::cout << std::setw(10) << std::left << "Index"  << "|" << std::setw(10) << std::left << "First name" << "|" << std::setw(10) << std::left << "Last name" << "|" << std::setw(10) << std::left << "Nickname" << "|" << std::endl << std::endl;
    while (contacts[i].is_exists())
    {
        std::cout << std::setw(10) << std::right << contacts[i].get_index()
            << "|" << std::setw(10) << std::right << (contacts[i].get_fn().length() > 9 ? (contacts[i].get_fn().replace(9, 1, ".").substr(0, 10)) : contacts[i].get_fn()) 
            << "|" << std::setw(10) << std::right << (contacts[i].get_ln().length() > 9 ? (contacts[i].get_ln().replace(9, 1, ".").substr(0, 10)) : contacts[i].get_ln())
            << "|" << std::setw(10) << std::right << (contacts[i].get_nn().length() > 9 ? (contacts[i].get_nn().replace(9, 1, ".").substr(0, 10)) : contacts[i].get_nn()) 
            << "|" << std::endl;
        i++;
    }
}

void display_contact(Contact contact)
{
    std::cout << "/***************/" << std::endl;
    std::cout << "/****Details****/" << std::endl;
    std::cout << "/***************/" << std::endl;
    std::cout << "First name : " << contact.get_fn() << std::endl;
    std::cout << "Last name : " << contact.get_ln() << std::endl;
    std::cout << "Nickname : " << contact.get_nn() << std::endl;
    std::cout << "Phonenumber : " << contact.get_pn() << std::endl;
    std::cout << "Darkest secret : " << contact.get_ds() << std::endl;
}