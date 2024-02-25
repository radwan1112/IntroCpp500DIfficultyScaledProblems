#include <iostream>

int main()
{
    int x{123};
    int sum{};
    while (x != 0)
    {
        sum += (x % 10);
        x /= 10;
    }
    std::cout << "sum: " << sum << std::endl;
    return 0;
}