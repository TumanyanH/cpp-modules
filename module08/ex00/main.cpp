#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector<int> a;
    std::vector<int>::iterator iter;

    for (int i = 0; i < 10; i++)
        a.push_back(i);
    try {
        iter = easyfind(a, 2);
        std::cout << *iter << std::endl;
        iter = easyfind(a, 9);
        std::cout << *iter << std::endl;
        iter = easyfind(a, 25);
        std::cout << *iter << std::endl;
        iter = easyfind(a, 5);
        std::cout << *iter << std::endl;
    } catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}