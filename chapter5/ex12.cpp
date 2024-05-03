#include <iostream>

int main()
{
    int p1, p2, p3;
    std::cout << "Enter price: ";
    std::cin >> p1 >> p2 >> p3;

    std::cout << "highest price: " << ((p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3)) << '\n';

    return 0;
}