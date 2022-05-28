#include <iostream>
#include <random>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    int a = rand() % 3;
    std::cout << a << std::endl;
    Base *ab;
    switch (a)
    {
        case 0 :
            ab = new A();
            break;

        case 1 :
            ab = new B();
            break;

        case 2 :
            ab = new C();
            break;
    }
    return (ab);
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "unknown" << std::endl;
}

void identify(Base& p)
{
    Base a;

    try {
        a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return ;
    } catch(...) {}

    try {
        a = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return ;
    } catch(...) {}
    
    try {
        a = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return ;
    } catch(...) {}
    std::cout << "unkknown" << std::endl;
    return ;
}

int main()
{
    Base *thing;

    for (int a = 0; a < 10; a++)
    {
        std::cout << "---------------" << std::endl;
        thing = generate();
        std::cout << "Type of class is using pointer method: ";
        identify(thing);
        std::cout << "Type of class is using reference method: ";
        identify(*thing);
        delete thing;
    }
}