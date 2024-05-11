#include <iostream>

int main()
{
    std::cout << "Enter income: ";
    int income{};
    std::cin >> income;

    float tax{};

    if (income > 30000)
    {
        tax = (income - 30000) * 0.4 + (30000 - 14001) * 0.3 + (14000 - 12001) * 0.15;
    }
    else if (income > 14000 && income <= 30000)
    {
        tax = (income - 14000) * 0.3 + (14000 - 12001) * 0.15;
    }
    else if (income > 12000 && income <= 14000)
    {
        tax = (income - 12000) * 0.15;
    }
    else
    {
        tax = 0;
    }

    std::cout << "Total due tax = " << tax << '\n';

    return 0;
}