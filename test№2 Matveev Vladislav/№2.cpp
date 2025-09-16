#include <iostream>     
using namespace std;

int main() {
    long long A, B;     
    char op;            
    cin >> A >> op >> B;

    
    if (op == '+') {
        cout << (A + B) << endl;
    } else if (op == '-') {
        cout << (A - B) << endl;
    } else if (op == '*') {
        cout << (A * B) << endl;
    } else if (op == '/') {
        if (B == 0) {           
            cout << "undefined" << endl;
        } else {
            cout << (A / B) << endl;
        }
    } else {
        cout << "Unknown operation" << endl;
    }
    return 0; 
}