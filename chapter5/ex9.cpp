#include <iostream>
#include <string>
#include <array>

std::array<int, 4> octet(std::string ip)
{
    std::array<int, 4> octet;
    size_t pos1 = ip.find('.'); // Find the position of the first occurrence
    size_t pos2 = ip.find('.', pos1 + 1);
    size_t pos3 = ip.find('.', pos2 + 1);

    if (pos1 != std::string::npos && pos2 != std::string::npos && pos3 != std::string::npos)
    {
        octet[0] = std::stoi(ip.substr(0, pos1));
        octet[1] = std::stoi(ip.substr(pos1 + 1, pos2 - pos1 - 1));
        octet[2] = std::stoi(ip.substr(pos2 + 1, pos3 - pos2 - 1));
        octet[3] = std::stoi(ip.substr(pos3 + 1));
    }
    else
    {
        std::cout << "Check the ip address format" << '\n';
    }
    return octet;
}

char findClass(std::string ip)
{
    int class_a[2] = {0, 127};
    int class_b[2] = {128, 191};
    int class_c[2] = {192, 223};

    int first_octet{octet(ip)[0]};

    if (first_octet >= 0 && first_octet <= 127)
    {
        return 'a';
    }
    else if (first_octet >= 128 && first_octet <= 191)
    {
        return 'b';
    }
    else if (first_octet >= 192 && first_octet <= 223)
    {
        return 'c';
    }
    else
    {
        std::cout << "Invalid ip address" << '\n';
        return -1;
    }
}

bool canCommunicate(std::string ip1, std::string ip2)
{
    char ip1_class{findClass(ip1)};
    char ip2_class{findClass(ip2)};
    bool same_octels{false};
    bool same_class{false};
    int max{};

    if (ip1_class == ip2_class)
    {
        same_class = true;
    }

    if (ip1_class == 'a')
    {
        max = 1;
    }
    else if (ip1_class == 'b')
    {
        max = 2;
    }
    else
    {
        max = 3;
    }

    for (int i = 0; i < max; i++)
    {
        if (octet(ip1)[i] == octet(ip2)[i])
        {
            same_octels = true;
        }
        else
        {
            same_octels = false;
            break;
        }
    }

    if (same_octels && same_class)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    std::string host_ip{"10.0.3.2"};
    std::string guest_ip{"10.2.1.1"};

    if (canCommunicate(host_ip, guest_ip))
    {
        std::cout << "PCs can communicate" << '\n';
    }
    else
    {
        std::cout << "PCs cannot communicate" << '\n';
    }

    return 0;
}