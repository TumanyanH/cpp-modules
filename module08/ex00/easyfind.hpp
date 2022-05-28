#include <exception>

class NotFound : public std::exception
{
    const char * what () const throw ()
    {
        return ("Nothing found!");
    }
};

template <typename T>
typename T::iterator easyfind(T& cont, int needle)
{
    typename T::iterator iter = std::find(cont.begin(), cont.end(), needle);

    if (iter == cont.end())
        throw NotFound();
    return (iter);    
}