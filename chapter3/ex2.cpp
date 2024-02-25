#include <iostream>

int main()
{
    float x{};
    int y{};

    std::cout << "Enter the first integer: ";
    std::cin >> x;
    std::cout << "Enter the second number: ";
    std::cin >> y;

    int integral_part{static_cast<int>(x)};
    float decimal_part{x - integral_part};
    float remainder{(integral_part % y) + decimal_part};

    std::cout << "Remainder = " << remainder << '\n';

    return 0;
}