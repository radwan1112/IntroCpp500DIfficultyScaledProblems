#include <iostream>

int main()
{
    int x{45};
    int sum{};

    sum = x / 10 + x % 10;
    std::cout << "sum: " << sum << std::endl;

    return 0;
}