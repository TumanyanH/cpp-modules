#include <iostream>
#include <random>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    int a = rand() % 3;
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
    Base *checking;

    try {
        checking = reinterpret_cast<A*>(p);
        std::cout << "this" << std::endl;
    } catch(...)
    {
        std::cout << "err" << std::endl;
    }
}

void identify(Base& p);

int main()
{
    Base *thing;

    for (int a = 0; a < 10; a++)
    {
        thing = generate();
        identify(thing);
        delete thing;
    }
}