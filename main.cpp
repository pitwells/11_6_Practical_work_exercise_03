#include <iostream>

std::string qwe;
std::string ip = "123.456.7.8";
int octet = 3;

std::string get_address_part (std::string ip, int octet) {
    std::string partIp;
    int dot = 0;
    for (int i = 0; i < ip.length(); i++) {
        if (ip[i] != '.' && dot == octet) partIp += ip[i];
            else if (ip[i] == '.') dot += 1;
    }
    return partIp;
}


std::string address_part_valid (std::string partIp) {
    partIp = "15";
    return partIp;
}


int main() {
    std::cout << "IP Address Validation" << std::endl << std::endl;

    std::cout << address_part_valid(ip);

    return 0;
}
