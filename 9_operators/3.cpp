// comparison operators

#include<iostream>
using namespace std;
int main() {
    int a, b, c; // a = 5, b = 4, c = 3
    
    cout << "Enter a number a: ";
    cin >> a;
    cout << "Enter a number b: ";
    cin >> b;
    cout << "Enter a number c: ";
    cin >> c;

    cout << (a != b) << endl;
    cout << (a > b > c) << endl; // 0
    if(a == b) {
        cout << "a and b are equal" << endl;
    }else if(b == c) {
        cout << "b and c are equal" << endl;
    }else {
        cout << "all are different" << endl;
    }
}