#include <iostream>
#include <bitset>

int main()
{
    int n{};
    std::cout << "Enter an integer: ";
    std::cin >> n;

    std::bitset<8> bits(n);

    std::cout << "Binary form of " << n << " is " << bits << '\n';
    int sum = bits[1] + bits[3] + bits[5] + bits[7];

    std::cout << "Total sum of digits in 2, 4, 6, and 8 positions is " << sum << '\n';


    return 0;
}