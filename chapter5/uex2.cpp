#include <iostream>

int main()
{
    int n1, n2, n3;
    std::cout << "Enter integers: ";
    std::cin >> n1 >> n2 >> n3;

    std::cout << ((n3 > n2 && n2 > n1)? "They are in ascending order" : "They are not") << '\n';

    return 0;
}