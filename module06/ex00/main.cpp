#include "Convert.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Wrong params" << std::endl;
        return 1;
    }
    Convert(std::string(av[1]));
    return 0;
}