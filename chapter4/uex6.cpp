#include <iostream>
#include <bitset>

int main()
{
    unsigned int n{};
    std::cout << "Enter an integer betwen (0, 255): ";
    std::cin >> n;
    std::cout << "Binary from of " << n << " before swap is " << std::bitset<8>(n) << '\n';

    int xor_result = ((n >> 0) ^ (n >> 4)) & ((1U << 4) - 1);
    n = n ^ ((xor_result << 0) | (xor_result << 4));

    std::cout << "Binary from of " << n << " after swap is " << std::bitset<8>(n) << '\n';

    return 0;
}