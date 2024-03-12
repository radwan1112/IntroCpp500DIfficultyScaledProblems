#include <iostream>

int main()
{
    int x{};
    int y{};
    
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;

    std::cout << "The smaller integer is: " << ((x < y) ? x : y) << '\n';

    return 0;
}