// logical operators

#include<iostream>
using namespace std;
int main() {
    int a, b, c;

    cout << "Enter a number a: ";
    cin >> a;
    cout << "Enter a number b: ";
    cin >> b;
    cout << "Enter a number c: ";
    cin >> c;

    if(a && b && c) {
        cout << "all are true" << endl;
    }

    if(a || b || c) {
        cout << "at least one of them is true" << endl;
    }

    if(!a) {
        cout << "a is false" << endl;
    }

    if(!b) {
        cout << "b is false" << endl;
    }

    if(!c) {
        cout << "c is false" << endl;
    }
}