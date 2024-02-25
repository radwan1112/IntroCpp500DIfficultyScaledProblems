#include <iostream>
#include <cmath>

long int duplicate(long int n)
{
    long int x{};
    long int digit{};

    int i{0};
    while (n > 0)
    {
        digit = (n % 10) * 10 + (n % 10);
        digit *= std::pow(10, 2 * i);
        x += digit;
        n /= 10;
        i++;
    }
    return x;
}

int main()
{
    std::cout << "Enter an integer: ";
    long int n{};
    std::cin >> n;
    std::cout << "Duplicated number: " << duplicate(n) << '\n';

    return 0;
}