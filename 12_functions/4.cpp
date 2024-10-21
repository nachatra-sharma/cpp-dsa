// pass by reference

#include<iostream>
using namespace std;

void swapNumber(int &a, int &b) { // pass by reference
    int c;
    c = a;
    a = b;
    b = c;
}

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    swapNumber(a, b);
    cout << a << " " << b << endl;
}