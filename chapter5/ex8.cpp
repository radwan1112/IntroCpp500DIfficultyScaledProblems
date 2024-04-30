#include <iostream>
#include <cmath>

int main()
{
    unsigned long int isbn{9789609319613};
    unsigned long int len{1000000000000};

    int check_digit{};
    int sum{};

    for (int i = 0; i < 12; i++)
    {
        sum += (i % 2 == 0) ? (isbn / len) : (isbn / len) * 3;
        isbn %= len;
        len /= 10;
    }

    check_digit = 10 - (sum % 10);

    if (check_digit == isbn % 10)
    {
        std::cout << "ISBN code is valid" << '\n';
    }
    else
    {
        std::cout << "ISBN code is invalid" << '\n';
    }

    return 0;
}