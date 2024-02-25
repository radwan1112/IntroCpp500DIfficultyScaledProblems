#include <iostream>

int main()
{
    double x{}, y{};
    
    std::cout << "Enter two numbers: ";
    std::cin >> x >> y;

    int x_integral_part{static_cast<int>(x)};
    int y_integral_part{static_cast<int>(y)};

    std::cout << "x + y Integral parts = " << x_integral_part + y_integral_part << '\n';
    std::cout << "x + y decimal parts = " << (x - x_integral_part) + (y - y_integral_part) << '\n';

    return 0;
}