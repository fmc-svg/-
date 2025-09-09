#include <iostream>
#include <string>

int main() {
    int a;
    int b;
    std::cin >> a >> b;
    int sum;
    sum = a+b;
    int raz;
    raz = a-b;
    int umn;
    umn = a*b;
    int del;
    del = a/b;
    std::cout << sum << " " << raz << " " << umn << " " <<del;
}