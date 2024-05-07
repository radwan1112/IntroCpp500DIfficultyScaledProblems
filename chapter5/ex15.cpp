#include <iostream>
#include <cctype>

int main()
{
    char sex{};
    std::cout << "Enter your sex 'M' for male and 'F' for Female: ";
    std::cin >> sex;
    sex = std::tolower(sex);

    float height{};
    std::cout << "Enter your height: ";
    std::cin >> height;

    switch (sex)
    {
    case 'm':
        if (height < 1.70)
            std::cout << "Short" << '\n';
        else if (height >= 1.70 && height < 1.85)
            std::cout << "Normal" << '\n';
        else
            std::cout << "Tall" << '\n';
        break;
    case 'f':
        if (height < 1.60)
            std::cout << "Short" << '\n';
        else if (height >= 1.60 && height < 1.75)
            std::cout << "Normal" << '\n';
        else
            std::cout << "Tall" << '\n';
    default:
        break;
    }

    return 0;
}