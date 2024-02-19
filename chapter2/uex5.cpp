#include <iostream>

int main()
{
    int x{0};
    int y{5};

    int r{};

    if ((x / y) * y == x)
    {
        r = 0;
    }
    else
    {
        r = x - ((x / y) * y);
    }

    std::cout << "Remainder of " << x << " % " << y << " = " << r << std::endl;

    return 0;
}