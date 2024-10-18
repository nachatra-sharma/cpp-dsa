// bitwise operators

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

    cout << (a & b) << endl; // bitwise and (&)
    cout << (a | c) << endl; // bitwise or (|)
    cout << (a ^ b) << endl; // bitwise ex-or (^)
    cout << ~5 << endl;      // bitwise compliment (~)
    cout << (5 << 1) << endl; // left shift (<<)
    cout << (5 >> 2) << endl; // right shift (>>)
}