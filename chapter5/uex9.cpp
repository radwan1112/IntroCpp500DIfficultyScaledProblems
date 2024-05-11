#include <iostream>
#include <string>

int main()
{
    int n1{};
    int rev{};
    std::cout << "Enter four digit integer: ";
    std::cin >> n1;

    std::string message = (n1 % 10 == n1 / 1000) ? (((n1 % 100) / 10) == ((n1 / 100) % 10)) ? "Can be read in reverse" : "Cant be read in reverse" : "Can't be read in reverse";

    std::cout << message << '\n';

    return 0;
}