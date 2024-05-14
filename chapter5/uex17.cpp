#include <iostream>

void ageInWords(int age)
{
    int ones_digit{age % 10};
    int tenth_digit{age / 10};

    if (age >= 10 && age < 20)
    {
        switch (age)
        {
        case 0:
            std::cout << "ten";
            break;
        case 1:
            std::cout << "eleven";
            break;
        case 2:
            std::cout << "twelve";
            break;
        case 3:
            std::cout << "thirteen";
            break;
        case 4:
            std::cout << "fourteen";
            break;
        case 5:
            std::cout << "fifteen";
            break;
        case 6:
            std::cout << "sixteen";
            break;
        case 7:
            std::cout << "seventeen";
            break;
        case 8:
            std::cout << "eighteen";
            break;
        case 9:
            std::cout << "nineteen";
            break;
        default:
            std::cout << "error printing the 10-19 digit";
            break;
        }
        return;
    }

    if (age >= 20)
    {
        switch (tenth_digit)
        {
        case 2:
            std::cout << "twenty";
            break;
        case 3:
            std::cout << "thirty";
            break;
        case 4:
            std::cout << "fourty";
            break;
        case 5:
            std::cout << "fifty";
            break;
        case 6:
            std::cout << "sixty";
            break;
        case 7:
            std::cout << "seventy";
            break;
        case 8:
            std::cout << "eighty";
            break;
        case 9:
            std::cout << "ninety";
            break;
        default:
            break;
        }
    }

    if (ones_digit != 0)
    {
        switch (ones_digit)
        {
        case 1:
            std::cout << "-one";
            break;
        case 2:
            std::cout << "-two";
            break;
        case 3:
            std::cout << "-three";
            break;
        case 4:
            std::cout << "-four";
            break;
        case 5:
            std::cout << "-five";
            break;
        case 6:
            std::cout << "-six";
            break;
        case 7:
            std::cout << "-seven";
            break;
        case 8:
            std::cout << "-eight";
            break;
        case 9:
            std::cout << "-nine";
            break;
        default:
            std::cout << "error printing the ones digit";
            break;
        }
    }
}

int main()
{
    int current_year{2024};
    int dob{};
    std::cout << "Enter date of birth: ";
    std::cin >> dob;

    while (dob < 1925 || dob >= 2024)
    {
        std::cout << "Enter date of birth: ";
        std::cin >> dob;
    }

    int age{current_year - dob};

    std::cout << "Your age is: ";
    ageInWords(age);

    if (age == 1)
    {
        std::cout << " year old";
    }
    else
    {
        std::cout << " years old";
    }

    std::cout << std::endl;

    return 0;
}