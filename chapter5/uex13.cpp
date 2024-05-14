#include <iostream>
#include <string>
int main()
{
    int grade{20};
    std::cout << ((grade > 18 && grade <= 20)? "Excellent" : (grade > 16 && grade <= 18)? "Very Good" : (grade > 13 && grade <= 16)? "Good" : (grade >= 10 && grade <= 13)? "Dangerous Zone" : "Need Help") << '\n';


    return 0;
}