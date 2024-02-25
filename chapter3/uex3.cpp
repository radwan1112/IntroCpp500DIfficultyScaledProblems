#include <iostream>

int main()
{
    int octal{012};
    int hexadecimal{0x41};
    int decimal{10};

    std::cout << octal << " + " << hexadecimal << " + " << decimal << " = " << octal + hexadecimal + decimal << '\n';

    return 0;
}