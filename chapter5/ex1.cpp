#include <iostream>

int main()
{
    float a{}, b{};

    std::cout << "Enter first float: ";
    std::cin >> a;
    std::cout << "Enter second float: ";
    std::cin >> b;

    std::cout << a << "x + " << b << " = 0" << '\n';
    std::cout << a << "x" << " = " << -b << '\n';
    std::cout << "x" << " = " << -b/a << '\n';


    return 0;
}