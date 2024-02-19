#include <iostream>
#define NUM 30;

int main()
{
    const int a{10};
    float f{1.23};
    int i{static_cast<int>(f)};

    int num{i + 2};

    return 0;
}