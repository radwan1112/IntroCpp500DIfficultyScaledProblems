#include <iostream>

struct Order
{
    int no_small_bottles{};
    int no_big_bottles{};
    int total_no_bottles{};
    float total_cost{};
    float final_price{};
};

int main()
{
    float small_cost{0.008};
    float big_cost{0.02};
    float discount{};
    struct Order order;

    std::cout << "Number of small and big bottles ordered: ";
    std::cin >> order.no_small_bottles >> order.no_big_bottles;

    order.total_cost = (order.no_small_bottles * small_cost) + (order.no_big_bottles * big_cost);
    order.total_no_bottles = order.no_big_bottles + order.no_small_bottles;

    if (order.total_cost > 600)
    {
        discount = 0.2;
    }
    else
    {
        if (order.total_cost > 200 || order.total_no_bottles > 3000)
        {
            discount = 0.08;
        }
    }

    order.final_price = order.total_cost - (order.total_cost * discount);

    std::cout << "Total Cost: " << order.total_cost << '\n';
    std::cout << "Final Price: " << order.final_price << '\n';

    return 0;
}