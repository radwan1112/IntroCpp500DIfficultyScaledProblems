#include <iostream>

int main()
{
    float total_cost{};
    std::cout << "Enter the total cost: ";
    std::cin >> total_cost;

    std::cout << "Total cost: " << ((total_cost >= 100)? (1 - 0.05) * total_cost : total_cost) << '\n';

    return 0;
}