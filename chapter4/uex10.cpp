#include <iostream>
#include <bitset>

int main()
{
    unsigned int x{}, n{};
    std::cout << "Enter an integer [0, 255] and the number of shifting bits: ";
    std::cin >> x >> n;
    std::bitset<8> bits(x);
    std::cout << "Base 10: " << x << " Binary: " << bits << '\n';

    std::bitset<8> leftShift((x << n) | (x >> (8 - n)));
    std::bitset<8> rightShift((x >> n) | (x << (8 - n)));

    std::cout << bits << " << " << n << " = " << leftShift << " = " << leftShift.to_ulong() << '\n';
    std::cout << bits << " >> " << n << " = " << rightShift << " = " << rightShift.to_ulong() << '\n';

    unsigned int sum = leftShift.to_ulong() + rightShift.to_ulong();
    
    std::cout << leftShift.to_ulong() << " + " << rightShift.to_ulong() << " = " << sum << '\n';

    return 0;
}