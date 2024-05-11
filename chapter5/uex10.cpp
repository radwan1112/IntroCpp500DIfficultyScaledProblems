#include <iostream>
#include <cmath>

int main()
{
    float x{};
    std::cout << "Floating point value: ";
    std::cin >> x;
    float y{};

    if(x < -5)
        y = 8;
    if(x >= -5 && x < 3)
        y = 1 / x;
    if(x >= 3 && x < 12)
        y = (std::pow(x, 2) - 4);
    if(x >= 12)
        y = 6 / std::pow(x - 14, 2);

    std::cout << "f(x) = " << y << '\n';

    return 0;
}