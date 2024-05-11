#include <iostream>

struct Student
{
    int lab_grade{};
    int theory_grade{};
    float final{};
};

int main()
{
    Student students[3];
    int count{};
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Enter the theory and lab grade of student no " << i + 1 << ": ";
        std::cin >> students[i].theory_grade >> students[i].lab_grade;
        students[i].final = students[i].lab_grade * 0.3 + students[i].theory_grade * 0.7;
        std::cout << "Final grade: " << students[i].final << '\n';
        if (students[i].final >= 8 && students[i].final <= 10)
        {
            count++;
        }
    }

    std::cout << count << " students got a grade between 8 and 10 " << '\n';

    return 0;
}