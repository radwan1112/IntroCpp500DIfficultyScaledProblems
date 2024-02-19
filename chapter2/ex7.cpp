#include <iostream>

int main()
{
    float i{3.45}, j{6.78};
    std::cout << "Before: " << i << " " << j << std::endl;

    int k{static_cast<int>(i)};
    int h{static_cast<int>(j)};

    i = h + (i - k);
    j = k + (j - h);

    std::cout << "After: " << i << " " << j << std::endl;

    return 0;
}