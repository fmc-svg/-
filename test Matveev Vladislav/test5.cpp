#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    int h = n / 3600;
    int m = (n%3600)/60;
    int s = n % 60;
    std::cout << h << ":";
    if (m<10) std::cout << "0";
    std::cout << m << ":";
    if (s<10) std::cout << "0";
    std::cout << s;
}