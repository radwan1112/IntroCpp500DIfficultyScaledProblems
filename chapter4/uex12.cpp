#include <iostream>
#include <cmath>
#include <format>

int main()
{
    unsigned int n{};
    std::cout << "Enter a positive int: ";
    std::cin >> n;
    int i{};
    unsigned int result{};
    while (result < n)
    {
        result = std::pow(2, i);
        i++;
    }

    std::cout << "The next highest power of 2 is " << result << '\n';

    return 0;
}