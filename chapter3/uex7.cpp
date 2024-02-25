#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int n{};
    std::cin >> n;

    std::cout << (n / 50) << " * " << 50 << ", "
              << ((n % 50) / 20) << " * " << 20 << ", "
              << (((n % 50) % 20) / 10) << " * " << 10 << ", "
              << ((((n % 50) % 20) % 10) / 1) << " * " << 1 << ".\n";

    return 0;
}