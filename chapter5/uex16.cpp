#include <iostream>

struct Fraction
{
    float numerator;
    float denominator;
};

int main()
{
    struct Fraction fraction_1;
    std::cout << "Enter the first fraction: ";
    std::cin >> fraction_1.numerator >> fraction_1.denominator;

    struct Fraction fraction_2;
    std::cout << "Enter the second fraction: ";
    std::cin >> fraction_2.numerator >> fraction_2.denominator;

    std::cout << "1. Addition." << '\n';
    std::cout << "2. Substraction." << '\n';
    std::cout << "3. Multiplication." << '\n';
    std::cout << "4. Division." << '\n';

    int option{};
    std::cout << "Enter option: ";
    std::cin >> option;

    float result{};
    char operation{};

    switch (option)
    {
    case 1:
        result = (fraction_1.numerator / fraction_1.denominator) + (fraction_2.numerator / fraction_2.denominator);
        operation = '+';
        break;
    case 2:
        result = (fraction_1.numerator / fraction_1.denominator) - (fraction_2.numerator / fraction_2.denominator);
        operation = '-';
        break;
    case 3:
        result = (fraction_1.numerator / fraction_1.denominator) * (fraction_2.numerator / fraction_2.denominator);
        operation = '*';
        break;
    case 4:
        result = (fraction_1.numerator / fraction_1.denominator) / (fraction_2.numerator / fraction_2.denominator);
        operation = '/';
        break;
    default:
        break;
    }

    std::cout << fraction_1.numerator << "/" << fraction_1.denominator << " " << operation << " " << fraction_2.numerator << "/" << fraction_2.denominator << " = " << result << std::endl;  
}