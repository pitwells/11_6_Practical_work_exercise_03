#include <iostream>

std::string qwe;
std::string ip = "123.456.7.8";
int octet = 0;

std::string get_address_part (std::string ip, int octet) {
    std::string qwe;
    int dot = 0; // добавить переменную которая будет считать номер октета
    // и условие которое будет останавливать цикл когда он будет равен заданаму.
    for (int i = 0; i < ip.length(); i++) {
        if (ip[i] != '.' && dot == octet) {
            qwe += ip[i];
            std::cout << "QWE " << qwe << std::endl;
        }

        dot += 1;
        std::cout << "1";
    }
    std::cout << "DOT " << dot << std::endl;
    std::cout << "2";
    return qwe;
}


int main() {
    std::cout << "IP Address Validation" << std::endl << std::endl;

    get_address_part(ip, 0);

    //check_valid();

    std::cout << "END";
    return 0;
}
