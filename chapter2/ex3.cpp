#include <iostream>

int main()
{
    int x{50};
    int y{20};

    std::cout << x << " + " << y << " = " << x + y << std::endl;
    std::cout << x << " - " << y << " = " << x - y << std::endl;
    std::cout << x << " * " << y << " = " << x * y << std::endl;
    std::cout << x << " / " << y << " = " << static_cast<double>(x) / (y) << std::endl;
    std::cout << x << " % " << y << " = " << x % y << std::endl;

    return 0;
}