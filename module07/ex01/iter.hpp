#ifndef IIER
# define IIER

template <class T>
void iter(T arr[], int size, void (*func)(const T&))
{
    for (int a = 0; a < size; a++)
        func(arr[a]);
}

#endif