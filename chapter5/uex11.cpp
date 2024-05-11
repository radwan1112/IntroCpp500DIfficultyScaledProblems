#include <iostream>

int main()
{
    int n1, n2, n3, n4;
    std::cout << "Enter four integers: ";
    std::cin >> n1 >> n2 >> n3 >> n4;
    int max{n1}, sec_max{n1};

    if (n2 > max)
    {
        sec_max = max;
        max = n2;
    }
    if (n3 > max)
    {
        sec_max = max;
        max = n3;
    }
    if (n4 > max)
    {
        sec_max = max;
        max = n4;
    }

    std::cout << max << " + " << sec_max << " = " << max + sec_max << '\n';

    return 0;
}