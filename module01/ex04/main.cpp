#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
    std::ofstream file;
    std::string outfile;
    std::string s1;
    std::string s2;

    if (argc < 4)
    {
        std::cout << "arguments are incorrect" << std::endl;
        return 1;
    }
    file.open(argv[1]);
    
    outfile = std::string(argv[1]).append(".replace");

    return 0;
}