#include <iostream>

int main()
{
    int grade;
    std::cout << "Grade: ";
    std::cin >> grade;

    std::cout << "Grade: ";

    std::cout << ((grade >= 7.5 && grade <= 10)? "A" : (grade >=5 && grade < 7.5)? "B" : (grade >= 0 && grade < 5)? ("Next time") : ("Wrong input")) << '\n';

    return 0;
}