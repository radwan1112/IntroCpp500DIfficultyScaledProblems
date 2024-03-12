#include <iostream>

int main()
{
    int x, y;

    std::cout << "Enter two integers: ";
    std::cin >> x >> y;

    std::cout << "before swap x = " << x << " and y = " << y << '\n';
    x ^= y;
    y ^= x;
    x ^= y;
    std::cout << "after swap x = " << x << " and y = " << y << '\n';

    return 0;
}