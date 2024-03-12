#include <iostream>

int main()
{
    int min_score{5};
    std::cout << "Min score to pass the exams: " << min_score << '\n';

    int std1{};
    int std2{};
    int std3{};

    std::cout << "Enter the grades of three students: ";
    std::cin >> std1 >> std2 >> std3;

    int no_std_passed{};
    no_std_passed = (std1 <= 10 && std1 >= 5) + (std2 <= 10 && std2 >= 5) + (std3 <= 10 && std3 >= 5);
    std::cout << "Number of students passed with grades upove " << min_score << " is " << no_std_passed << '\n';

    return 0;
}