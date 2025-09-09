#include <iostream>
#include <string>

int main() {
    int a;
    int b;
    std::cin >> a >> b;
    int sum;
    sum = a*a+b*b;
    int gipp;
    gipp = pow(sum,0.5);
    std::cout << gipp;
}