#ifndef WINNER
#define WINNER

#include <iostream>
#include <string>
#include <fstream>

class Winner
{
private:
    std::string     _s1;
    std::string     _s2;
    std::string     _content;
    std::ifstream   _inf;
    std::ofstream   _outf;
public:
    Winner( void );
    Winner( std::string s1, std::string s2, std::string infile );
    ~Winner();

    void write_out( std::string text);
    void replace( void );
    void replace_line( void );

    
};

#endif