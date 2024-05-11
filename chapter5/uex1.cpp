#include <iostream>
#include <string>

int main()
{
    int p1, p2, p3;
    std::cout << "Enter price: ";
    std::cin >> p1 >> p2 >> p3;

    std::string message = (p1 > 100 || p2 > 100 || p3 > 100)? "At least one product cost more than 100$" : "Non of the products cost more than 100$";
    std::cout << message << '\n';

    return 0;
}