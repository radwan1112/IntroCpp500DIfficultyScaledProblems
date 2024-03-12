#include <iostream>
#include <bitset>

int main()
{
    unsigned int data, ones, bit1, bit2, bit3, bit4, bit5, parity_bit;
    ones = 0;

    std::cout << "Enter bit1: ";
    std::cin >> bit1;
    if (bit1 == 1)
    {
        ones++;
    }

    std::cout << "Enter bit2: ";
    std::cin >> bit2;
    if (bit2 == 1)
    {
        ones++;
    }

    std::cout << "Enter bit3: ";
    std::cin >> bit3;
    if (bit3 == 1)
    {
        ones++;
    }

    std::cout << "Enter bit4: ";
    std::cin >> bit4;
    if (bit4 == 1)
    {
        ones++;
    }

    std::cout << "Enter bit5: ";
    std::cin >> bit5;
    if (bit5 == 1)
    {
        ones++;
    }

    if (ones & 1)
    {
        parity_bit = 1;
    }
    else
    {
        parity_bit = 0;
    }

    data = (bit1 << 6) + (bit2 << 5) + (bit3 << 4) + (bit4 << 3) + (bit5 << 2) + (parity_bit << 1) + 1;
    std::cout << data << '\n' << std::bitset<8> (data) << '\n';

    return 0;
}