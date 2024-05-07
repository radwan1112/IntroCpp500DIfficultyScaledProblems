#include <iostream>

int main()
{
    int pass_class{};
    std::cout << "Enter class (1-Eco, 2-Business, 3-VIP): ";
    std::cin >> pass_class;

    float weight{};
    std::cout << "Enter the weight of the luggage: ";
    std::cin >> weight;

    switch (pass_class)
    {
    case 1:
        if (weight <= 25)
            std::cout << "Cost: " << 0 << '\n';
        else if (weight > 25 && weight <= 40)
            std::cout << "Cost: " << 1.50 * (weight - 25) << '\n';
        else
            std::cout << "Cost: " << 2 * (weight - 40) + 22.5 << '\n';
        break;
    case 2:
        if (weight <= 35)
            std::cout << "Cost: " << 0 << '\n';
        else if (weight > 35 && weight <= 50)
            std::cout << "Cost: " << 1.25 * (weight - 35) << '\n';
        else
            std::cout << "Cost: " << 1.5 * (weight - 50) + 18.75 << '\n';
    case 3:
         if(weight <= 60)
            std::cout << "Cost: " << 0 << '\n';
        else
            std::cout << "Cost: " << 30 << '\n';
    default:
        std::cout << "Error" << '\n';
        break;
    }

    return 0;
}