#include <iostream>

int main()
{
    int x{123}, y{999}, temp{};

    temp = x / 100;
    x = (x % 100) + ((y % 10) * 100);
    y /= 10;
    y = (y * 10) + temp;

    std::cout << "Numbers after swapping: " << x << " " << y << '\n';

    return 0;
}