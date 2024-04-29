#include <iostream>

int main()
{
    int a, b, c;
    std::cout << "Enter grades: ";
    std::cin >> a >> b >> c;

    if (a <= b && a <= c)
    {
        std::cout << a << ' ';
        if (b < c)
        {
            std::cout << b << ' ' << c;
        }
        else
        {
            std::cout << c << ' ' << b;
        }
    }
    else if (b < a && b < c)
    {
        std::cout << b << ' ';
        if (a < c)
        {
            std::cout << a << ' ' << c;
        }
        else
        {
            std::cout << c << ' ' << a;
        }
    }
    else
    {
        std::cout << c << ' ';
        if (b < a)
        {
            std::cout << b << ' ' << a;
        }
        else
        {
            std::cout << a << ' ' << b;
        }
    }

    std::cout << std::endl;

    return 0;
}