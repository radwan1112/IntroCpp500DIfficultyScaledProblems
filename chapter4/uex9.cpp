#include <iostream>
#include <bitset>

int main()
{
    unsigned int n{};
    std::cout << "Postive integer: ";
    std::cin >> n;
    int bytes{};
    std::cout << "Number of bytes: ";
    std::cin >> bytes;
    std::bitset<32> bits(n);
    std::cout << "Base 10: " << n << " Binary: ";
    for (int i = 31; i >= 0; i--)
    {
        std::cout << bits[i];
        if ((i % 8 == 0) && i != 1)
        {
            std::cout << " | ";
        }
    }
    std::cout << '\n';

    n = (n >> (8 * bytes)) | (n << (32 - (8 * bytes)));

    bits = n;

    std::cout << "Base 10: " << n << " Binary: ";
    for (int i = 31; i >= 0; i--)
    {
        std::cout << bits[i];
        if ((i % 8 == 0) && i != 1)
        {
            std::cout << " | ";
        }
    }
    std::cout << '\n';

    return 0;
}