#include <iostream>

int main()
{
    int n{};

    std::cout << "Enter a three digit integer number: ";
    std::cin >> n;

    n = (n % 10) * 100 + ((n / 10) % 10) * 10 + (n / 100);

    std::cout << n << '\n';

    return 0;
}