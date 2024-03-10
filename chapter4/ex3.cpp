#include <iostream>

int main()
{
    int consumption{};
    std::cout << "Enter the water consumption: ";
    std::cin >> consumption;

    float cost = (consumption > 5 && consumption <= 30) * (consumption - 5) * 1.2 + (consumption > 30) * ((25 * 1.2) + (consumption - 30) * 1.5);

    std::cout << "Cost: " << cost << std::endl;
    
    return 0;
}