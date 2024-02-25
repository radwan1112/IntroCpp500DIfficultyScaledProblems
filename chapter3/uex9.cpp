#include <iostream>

int main()
{
    int n{1245}, digit{3};

    n = (n / 100) * 1000 + ((digit * 100) + (n % 100));

    std::cout << n << '\n';   

    return 0;
}