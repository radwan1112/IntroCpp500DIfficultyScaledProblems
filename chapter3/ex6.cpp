#include <iostream>

int main()
{
    std::cout << "Enter a positive integer: ";
    int x{};
    std::cin >> x;

    if (x % 10 >= 5)
    {
        x /= 10;
        x++;
        x *= 10;
    }
    else
    {
        x /= 10;
        x *= 10;
    }

    std::cout << "After rounding: " << x << '\n';

    return 0;
}