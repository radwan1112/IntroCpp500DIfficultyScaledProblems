#include <iostream>
#include <cmath>
#include <algorithm>

int main()
{
    double g1, g2;
    double diff{5};
    std::cout << "Enter grades: ";
    std::cin >> g1 >> g2;

    double avg_grade{};
    double final_grade{};

    avg_grade = (g1 + g2) / 2;

    if (avg_grade < diff)
    {
        final_grade = avg_grade;
    }
    else
    {
        double g3;
        std::cout << "Enter third grade: ";
        std::cin >> g3;
        if (avg_grade == g3)
        {
            final_grade = avg_grade;
        }
        else if (g3 < std::min(g1, g2))
        {
            final_grade = std::min(g1, g2);
        }
        else
        {
            if (std::abs(g3 - g1) <= std::abs(g3 - g2))
            {
                final_grade = (g1 + g3) / 2;
            }
            else
            {
                final_grade = (g2 + g3) / 2;
            }
        }
    }

    std::cout << "Final grade: " << final_grade << '\n';

    return 0;
}