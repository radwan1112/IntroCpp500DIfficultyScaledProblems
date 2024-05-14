#include <iostream>

int main()
{
    int n1, n2, n3;
    std::cout << "Enter 3 integers: ";
    std::cin >> n1 >> n2 >> n3;

    std::cout << "1. Check if the integers are different" << '\n';
    std::cout << "2. Check if any two integers are equal" << '\n';
    std::cout << "3. Check how many integers are betwen [-5, 5]" << '\n';

    std::cout << "Enter option: ";
    int option{};
    std::cin >> option;
    int count{};

    switch (option)
    {
    case 1:
        if (n1 != n2 && n1 != n3 && n2 != n3)
        {
            std::cout << "Integers are different" << '\n';
        }
        else
        {
            std::cout << "Integers are not Unique" << '\n';
        }
        break;
    case 2:
        if (n1 == n2 || n1 == n3 || n2 == n3)
        {
            std::cout << "Two integers are equal" << '\n';
        }
        else
        {
            std::cout << "No two integers are equal" << '\n';
        }
        break;
    case 3:
        if (n1 >= -5 && n1 <= 5)
        {
            count++;
        }
        if (n2 >= -5 && n2 <= 5)
        {
            count++;
        }
        if (n3 >= -5 && n3 <= 5)
        {
            count++;
        }
        std::cout << count << " integers are between [-5, 5]" << '\n';
        break;
    default:
        std::cout << "Something went wrong!" << '\n';
        break;
    }

    return 0;
}