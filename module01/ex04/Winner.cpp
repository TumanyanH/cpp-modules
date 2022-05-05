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
    else
        std::cout << "file corrupted" << std::endl;
    this->replace();
}

void Winner::replace( void )
{
    std::string::size_type i = 0;
    std::string::size_type j = 0;

    while (i < this->_content.size())
    {
        if (this->_content[i] != this->_s1[0])
        {
            this->_outf << this->_content[i];
            ++i;
        }
        else
        {
            j = 0;
            while (this->_content[i + j] == this->_s1[j])
                ++j;
            if (j == this->_s1.size())
            {
                this->_outf << this->_s2;
                i += j;
            }
            else
            {
                this->_outf << this->_content[i];
                ++i;
            }
        }
    }
}

Winner::~Winner ()
{
    Winner::_inf.close();
    Winner::_outf.close();
}