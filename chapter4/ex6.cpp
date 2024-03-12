#include <iostream>
#include <bitset>

int main()
{
    int n{};
    std::cout << "Enter an integer: ";
    std::cin >> n;

    int pos{};
    std::cout << "Enter a bit position [1 - 32]: ";
    std::cin >> pos;

    std::bitset<32> b(n);

    std::cout << "binary form of " << n << " is: " << b << std::endl;
    std::cout << "Bit in pos " << pos << " is: " << b[pos - 1] << std::endl;

    return 0;
}