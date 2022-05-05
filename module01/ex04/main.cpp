#include "Winner.hpp"

int main(int argc, char **argv)
{
    if (argc < 4)
    {
        std::cout << "arguments are incorrect" << std::endl;
        return 1;
    }
    if (std::string(argv[1]).empty() || std::string(argv[2]).empty())
        std::cout << "error: incomplete usage." << std::endl;
    Winner winner(argv[2], argv[3], argv[1]);
    winner.replace_line();
    return 0;
}