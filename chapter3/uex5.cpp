#include <iostream>

int roundLastTwoDigits(int n)
{
    if (n < 10)
    {
        return n;
    }
    else
    {
        if (n % 100 >= 50)
        {
            n /= 100;
            n++;
            n *= 100;
        }
        else
        {
            n /= 100;
            n *= 100;
        }
    }
    return n;
}

int main()
{
    int n{};

    std::cout << "Enter an integer number: ";
    std::cin >> n;

    std::cout << roundLastTwoDigits(n) << '\n';

    return 0;
}