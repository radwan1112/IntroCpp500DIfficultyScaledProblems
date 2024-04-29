#include <iostream>
#include <cmath>

int main()
{
    float height{};
    float weight{};

    std::cout << "Enter height in meters: ";
    std::cin >> height;

    std::cout << "Enter weight in kg: ";
    std::cin >> weight;

    double bmi{weight / std::pow(height, 2)};
    double lower_limit{20 * std::pow(height, 2)};
    double upper_limit{25 * std::pow(height, 2)};

    std::cout << "Your body mass index is: " << bmi << '\n';

    if (bmi < 20)
    {
        std::cout << "Lower than normal weight" << '\n';
    }
    else if (bmi >= 20 && bmi <= 25)
    {
        std::cout << "Normal weight" << '\n';
    }
    else if (bmi > 25 && bmi <= 30)
    {
        std::cout << "Overweight" << '\n';
    }
    else if (bmi > 30 && bmi <= 40)
    {
        std::cout << "Obese" << '\n';
    }
    else
    {
        std::cout << "Extremely obese" << '\n';
    }

    std::cout << "Normal weight for the give height is: " << lower_limit << " " << upper_limit << '\n';
    
    return 0;
}