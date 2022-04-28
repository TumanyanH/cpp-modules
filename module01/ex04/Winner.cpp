#include "Winner.hpp"

Winner::Winner ( void ) {}

Winner::Winner ( std::string s1, std::string s2, std::string infile)
{
    Winner::_inf.open(infile);
    Winner::_outf.open(infile.append(".replace"), std::ios::out | std::ios::trunc);
    Winner::_s1 = s1;
    Winner::_s2 = s2;
}

void Winner::replace_line( void )
{
    std::string line;

    if (Winner::_inf.is_open())
    {
        while (getline(Winner::_inf, line))
            Winner::_content.append(line + "\n");
    }
    std::cout << Winner::_content << std::endl;
    this->replace();
}

void Winner::replace( void )
{
    std::string::size_type i = this->_content.find(this->_s1, 0);
    std::string::size_type j = 0;
    std::string final_line;

    while (i < this->_content.size())
    {
        std::cout << j << " " << i << std::endl;
        final_line.append(this->_content.substr(j, i));
        final_line.append(this->_s2);
        j += (i + this->_s1.size());
        i = this->_content.find(this->_s1, j);
    }
    std::cout << "-----------------------" << std::endl << final_line; 
}

Winner::~Winner ()
{
    Winner::_inf.close();
    Winner::_outf.close();
}