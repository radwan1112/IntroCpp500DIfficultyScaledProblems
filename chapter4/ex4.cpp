#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int n{};
    std::cin >> n;

    std::cout << ((n & 1) ? "Number is Odd" : "Number is Even") << std::endl;

    return 0;
}