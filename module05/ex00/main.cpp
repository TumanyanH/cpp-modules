#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat bureaucrat = Bureaucrat("Random guy");

    bureaucrat.gradeUp();
    bureaucrat.gradeUp();
    bureaucrat.gradeUp();
    bureaucrat.gradeUp();
    bureaucrat.gradeUp();
    bureaucrat.gradeDown();
    std::cout << bureaucrat << std::endl;
}