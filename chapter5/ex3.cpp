#include <iostream>

int main()
{
    int pinCode{1234};
    int currentPin{};
    std::cout << "Enter the current PIN code: ";
    std::cin >> currentPin;

    if (currentPin == pinCode)
    {
        int temp1{}, temp2{};
        std::cout << "Enter a new PIN code: ";
        std::cin >> temp1;
        std::cout << "Enter again the new PIN code: ";
        std::cin >> temp2;
        if (temp1 == temp2)
        {
            pinCode = temp1;
            std::cout << "New code is stored\n";
        }
        else
        {
            std::cout << "Different codes are entered\n";
        }
    }
    else
    {
        std::cout << "Wrong code!" << '\n';
    }

    return 0;
}