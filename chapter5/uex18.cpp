#include <iostream>
#include <cctype>

int main()
{
    char vehicle;
    std::cout << "Enter the type of vehicle 'M' for Moto and 'A' for auto: ";
    std::cin >> vehicle;
    vehicle = std::tolower(vehicle);

    int cc{};
    std::cout << "Enter the cc: ";
    std::cin >> cc;

    int days{};
    std::cout << "Enter days to rent: ";
    std::cin >> days;
    int total_cost{};

    switch (vehicle)
    {
    case 'm':
        if (cc <= 100)
        {
            if (days >= 1 && days <= 2)
            {
                total_cost = days * 30;
            }
            else if (days >= 3 && days <= 5)
            {
                total_cost = days * 25;
            }
            else
            {
                total_cost = days * 20;
            }
        }
        else
        {
            if (days >= 1 && days <= 2)
            {
                total_cost = days * 40;
            }
            else if (days >= 3 && days <= 5)
            {
                total_cost = days * 35;
            }
            else
            {
                total_cost = days * 30;
            }
        }
        break;
    case 'a':
        if (cc <= 1000)
        {
            if (days >= 1 && days <= 2)
            {
                total_cost = days * 60;
            }
            else if (days >= 3 && days <= 5)
            {
                total_cost = days * 55;
            }
            else
            {
                total_cost = days * 50;
            }
        }
        else
        {
            if (days >= 1 && days <= 2)
            {
                total_cost = days * 80;
            }
            else if (days >= 3 && days <= 5)
            {
                total_cost = days * 70;
            }
            else
            {
                total_cost = days * 60;
            }
        }
        break;
    default:
        std::cout << "error!";
        break;
    }
    // Ask if insurance coverage is desired
    int insuranceOption;
    std::cout << "Do you want insurance coverage? (1 for Yes, 0 for No): ";
    std::cin >> insuranceOption;

    if (insuranceOption == 1)
    {
        total_cost *= 1.05; // Apply 5% extra charge
    }
    std::cout << "Total cost: " << total_cost << std::endl;

    return 0;
}