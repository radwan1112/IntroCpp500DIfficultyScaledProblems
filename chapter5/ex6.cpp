#include <iostream>

int main()
{
    double water{};
    std::cout << "Enter the water consumption in cubic meters: ";
    std::cin >> water;

    double cost{10};

    if (water <= 30)
    {
        cost += water * 0.6;
    }
    else if (water <= 50)
    {
        cost += 0.6 * 30 + 0.8 * (water - 30);
    }
    else if (water <= 60)
    {
        cost += 0.6 * 30 + 0.8 * 20 + 1.1 * (water - 50);
    }
    else
    {
        cost += 0.6 * 30 + 0.8 * 20 + 1.1 * 10 + 1.2 * (water - 60);
    }

    std::cout << "Cost = " << cost << '\n';

    return 0;
}