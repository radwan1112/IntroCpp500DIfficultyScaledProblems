#include <iostream>

int main()
{
    double i, j, k, m, max{};
    
    std::cout << "Enter prices: ";
    std::cin >> i >> j >> k >> m;

    if (i > max)
    {
        max = i;
    }
    if (j > max)
    {
        max = j;
    }
    if (k > max)
    {
        max = j;
    }
    if (m > max)
    {
        max = m;
    }

    std::cout << "The heighest price is: " << max;

    return 0;
}