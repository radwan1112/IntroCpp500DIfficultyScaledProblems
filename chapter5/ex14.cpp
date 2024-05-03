#include <iostream>

int main()
{
    char sign;
    int a, b;

    std::cout << "Enter operation and two integers: ";
    std::cin >> sign >> a >> b;

    switch (sign)
    {
    case '+':
        std::cout << "Sum: " << a + b << '\n';
        break;
    case '-':
        std::cout << "Diff: " << a - b << '\n';
        break;
    case '*':
        std::cout << "Product: " << a * b << '\n';
        break;
    case '/':
        if (b == 0)
            std::cout << "Can't divide by 0" << '\n';
        else
            std::cout << ": " << (float)a / b << '\n';
        break;
    default:
        std::cout << "Error!" << '\n';
        break;
    }

    return 0;
}