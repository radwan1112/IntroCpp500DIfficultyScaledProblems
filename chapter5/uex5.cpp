#include <iostream>
#include <string>
int main()
{
    int grade{};
    std::cout << "Enter grade: ";
    std::cin >> grade;

    std::string message = "";

    if (grade > 18 && grade <= 20)
        message = "Excellent";
    else if (grade > 16 && grade <= 18)
        message = "Very Good";
    else if (grade > 13 && grade <= 16)
        message = "Good";
    else if (grade >= 10 && grade <= 13)
        message = "Dangerous Zone";
    else
        message = "Need Help";

    std::cout << message << '\n';

    return 0;
}