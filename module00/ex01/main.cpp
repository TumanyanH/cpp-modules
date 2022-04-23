#include "./pb.hpp"

int main( void )
{
    Phonebook pb;
    std::string input;

    while (1)
    {
        std::string input;
        t_details details;
        int index;

        std::cout << "Enter command : ";
        getline(std::cin, input);
        if (!input.compare("ADD"))
            input_contact(&pb);
        else if (!input.compare("SEARCH"))
        {
            display_contacts( pb.get_contacts() );
            std::cout << "Enter index : ";
            std::cin >> index;
            std::cin.ignore(1000, '\n');
            std::cin.clear();
            if (index > 0 && index <= pb.get_size())
                display_contact(pb.get_contacts()[index - 1]);
            else 
                std::cout << "this makes no sense" << std::endl;
            continue ;
        }
        else if (!input.compare("EXIT"))
            break;
    }
    return 0;
}