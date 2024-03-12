#include <iostream>
#include <bitset>

unsigned createMask(unsigned a, unsigned b)
{
    unsigned r = 0;
    int temp{};
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    for (unsigned i = a; i <= b; i++)
        r |= 1 << i;

    return r;
}

int main()
{
    unsigned int n{};
    unsigned int pos1{};
    unsigned int pos2{};
    unsigned temp{};

    std::cout << "Enter integer and pos of two bits: ";
    std::cin >> n >> pos1 >> pos2;
    if (pos1 > pos2)
    {
        temp = pos1;
        pos1 = pos2;
        pos2 = temp;
    }
    std::cout << "Size of " << n << " is " << (sizeof(n)) * 8 << " bits" << '\n';

    std::bitset<32> bits(n);
    std::cout << "Binary form: ";
    for (int i = 31; i >= 0; i--)
    {
        std::cout << bits[i];
        if ((i % 8 == 0))
        {
            std::cout << " | ";
        }
    }
    std::cout << '\n';

    n = createMask(pos1, pos2) & n;
    n >>= (pos1);
    bits = n;

    std::cout << "Size of " << n << " is " << (sizeof(n)) * 8 << " bits" << '\n';
    std::cout << "Binary form: ";
    for (int i = 31; i >= 0; i--)
    {
        std::cout << bits[i];
        if ((i % 8 == 0))
        {
            std::cout << " | ";
        }
    }
    std::cout << '\n';

    return 0;
}