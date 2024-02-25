#include <iostream>

int main()
{   
    int passed{}, failed{};
    std::cout << "Number of students passed the exam: ";
    std::cin >> passed;

    std::cout << "Number of students failed the exam: ";
    std::cin >> failed;

    std::cout << "Success Ratio: " << ((passed / static_cast<float>(passed + failed)) * 100.0) << "%\n";
    std::cout << "Fail Ratio: " << ((failed / static_cast<float>(passed + failed)) * 100.0) << "%\n";

    return 0;
}