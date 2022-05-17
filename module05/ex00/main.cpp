#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat bureaucrat = Bureaucrat("Random guy", 50);

    bureaucrat.gradeUp();
    bureaucrat.gradeUp();
    bureaucrat.gradeUp();
    bureaucrat.gradeUp();
    bureaucrat.gradeUp();
    bureaucrat.gradeDown();
    std::cout << bureaucrat << std::endl;
}