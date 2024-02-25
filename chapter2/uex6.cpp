#include <iostream>

int main()
{
    float x{7.2};
    float y{7.2};

    int d{static_cast<int>(x / y)};
    float f{};

    if (x >= y)
    {
        f = x - (d * y);
        std::cout << "Integer part = " << d << " | Fractional part = " << f << std::endl;
        std::cout << x << " = (" << d << " * " << y << ") + " << f << std::endl;
    }
    else
    {
        f = x / y;
        std::cout << "Integer part = " << d << " | Fractional part = " << f << std::endl;
        std::cout << x << " = (" << f << " * " << y << ")" << std::endl;
    }

    return 0;
}