#include <iostream>   
using namespace std;

int main() {
    int A, B;         
    cin >> A >> B;    

    while (A > B) {
        if (A % 2 == 0 && A / 2 >= B) { 
            A = A / 2;                  
            cout << ":2" << endl;       
        } else {
            A = A - 1;                  
            cout << "-1" << endl;       
        }
    }
    return 0;           
}