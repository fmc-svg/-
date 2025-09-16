#include <iostream>
using namespace std;

int main() {
    double x, y;            
    cin >> x >> y;          
    int day = 1;            
    double sum = x;         

    while (sum <= y) {      
        sum = sum * 1.1;    
        day++;              
    }

    cout << day << endl;    
    return 0;               
}