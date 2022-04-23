#include <stdio.h>

class First {
    public : 
        void printer();
};

void First::printer()
{
    printf("hello world from oop\n");
}

int main()
{
    First a;

    a.printer();
    return 0;
}