#include <iostream>
#include <cstdint>

typedef struct {
    int a;
    int b;
} Data;


std::uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main()
{
    Data data;
    Data *data1;
    uintptr_t newone;

    data.a = 1;
    data.b = 2;
    newone = serialize(&data);
    data1 = deserialize(newone);
    std::cout << &data << " || " << data1 << std::endl;
}