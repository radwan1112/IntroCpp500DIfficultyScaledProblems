#include <iostream>

int main()
{
    int plates{}, cups{};
    std::cout << "Number of plates: ";
    std::cin >> plates;
    std::cout << "Number of cups: ";
    std::cin >> cups;

    int price_one_plate{}, price_one_cup{};
    std::cout << "Enter the price of one plate: ";
    std::cin >> price_one_plate;

    std::cout << "Enter the price of one cup: ";
    std::cin >> price_one_cup;

    std::cout << "Total cost: " << (plates * price_one_plate + cups * price_one_cup) << '\n';

    return 0;
}