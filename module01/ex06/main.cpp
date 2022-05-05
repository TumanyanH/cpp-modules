#include "Karen.hpp"

enum lvls {
    info, 
    debug,
    warning,
    error,
    def
};

lvls finder(char *string)
{
    if (std::string (string) == "INFO")
        return (info);
    else if (std::string (string) == "DEBUG")
        return (debug);
    else if (std::string (string) == "WARNING")
        return (warning);
    else if (std::string (string) == "ERROR")
        return (error);
    else 
        return (def);
}

int main(int argc, char **argv)
{
    Karen karen = Karen();
    lvls lvl;

    if (argc < 2)
        std::cout << "Wrong arguments" << std::endl;
    else
    {
        lvl = finder(argv[1]);
        switch (lvl)
        {
            case info : 
                karen.complain("info");
            case debug : 
                karen.complain("debug");
            case warning : 
                karen.complain("warning");
            case error : 
                karen.complain("error");
                break ;
            default :
                std::cout << "Remember my son. INFO | DEBUG | WARNING | ERROR " << std::endl;
        }
    }
    return 0;
}