#include <iostream>
#include <string>

int main() {
    int l;
    l = 109;
    int v;
    std::cin >> v;
    int t;
    std::cin >> t;
    int ost;
    ost = (v*t)%l;
    std::cout << ost;
}