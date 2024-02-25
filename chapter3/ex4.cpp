#include <iostream>

int main()
{
    int a1{}, a2{}, a3{}, temp{};
    std::cout << "Enter three integers: ";
    std::cin >> a1 >> a2 >> a3;

    temp = a1;
    a1 = a3;
    a3 = temp;

    temp = a2;
    a2 = a3;
    a3 = temp;

    std::cout << "a1 a2 a3 -> " << a1 << a2 << a3 << '\n';

    return 0;
}