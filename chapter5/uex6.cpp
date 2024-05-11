#include <iostream>
#include <string>

int main()
{
    std::string mac = "A3:32:35:1a:da:04";
    std::string first_octet = mac.substr(0, 2);
    std::string mac_type = "";
    
    int octet = std::stoi(first_octet, 0, 16);

    if (octet % 2 == 0)
    {
        mac_type = "unicast";
    }
    else
    {
        mac_type = "multicast";
    }
    std::cout << "Mac address is type " << mac_type << '\n';
    return 0;
}