#include <iostream>

int main()
{
    int n1, n2, n3;
    std::cout << "Enter 3 intgers: ";
    std::cin >> n1 >> n2 >> n3;

    if (n1 + n2 == n3 || n1 + n3 == n2 || n2 + n3 == n1)
    {
        std::cout << "Integers within [0, 10]: ";
        if (n1 >= 0 && n1 <= 10)
            std::cout << n1 << ' ';
        if (n2 >= 0 && n2 <= 10)
            std::cout << n2 << ' ';
        if (n3 >= 0 && n3 <= 10)
            std::cout << n3 << ' ';
        std::cout << '\n';
    }
    else
    {
        std::cout << "Enter another 3 integers: ";
        std::cin >> n1 >> n2 >> n3;
        int count{};
        if (n1 % 6 == 0 || n1 != 20)
            count++;
        if (n2 % 6 == 0 || n2 != 20)
            count++;
        if (n3 % 6 == 0 || n3 != 20)
            count++;
        std::cout << count << " numbers are multiples of 6 or not equal to 20" << '\n';
    }
    
    return 0;
}