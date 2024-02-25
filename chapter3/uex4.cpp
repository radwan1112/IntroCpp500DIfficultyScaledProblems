#include <iostream>

int main()
{

    int seconds{};
    std::cout << "Enter number in seconds: ";
    std::cin >> seconds;

    std::cout << "Time: " << seconds / 3600 << "h " << (seconds % 3600) / 60 << "m " << seconds % 60 << "s" << '\n'; 

    return 0;
}