#include <iostream>
#include <bitset>

int main()
{
    unsigned int temp{}, urg{}, ack{}, syn{}, fin{};
    std::cout << "Enter the values of URG, ACK, SYN, FIN : ";
    std::cin >> fin >> syn >> ack >> urg;

    temp = fin + (syn << 1) + (ack << 4) + (urg << 5);
    std::cout << "\nEncoding: " << temp << '\n';

    std::cout << "Binary: " << std::bitset<8>(temp) << std::endl;

    fin = temp & 1;
    syn = (temp >> 1) & 1;
    ack = (temp >> 4) & 1;
    urg = (temp >> 5) & 1;

    std::cout << "FIN:" << fin << " SYN:" << syn << " ACK:" << ack << " URG:" << urg << '\n';

    return 0;
}