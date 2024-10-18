// arithematic operators - binary operators

#include<iostream>
using namespace std;
int main() {
    int a, b;
    float c;
    cout << "Enter a number a: ";
    cin >> a;
    cout << "Enter a number b: ";
    cin >> b;
    cout << "Enter a decimal number: ";
    cin >> c;

    // both are integer types
    cout << "Addition of a and b is " << a + b << endl;
    cout << "Substraction of a and b is " << a - b << endl;
    cout << "Multipication of a and b is " << a * b << endl;
    cout << "Division of a and b is " << a / b << endl; // 5 / 3 = 1
    cout << "Modulus of a and b is " << a % b << endl;

    // one is int and second is float
    cout << "Addition of c and b is " << c + b << endl;
    cout << "Substraction of c and b is " << c - b << endl;
    cout << "Multipication of c and b is " << c * b << endl;
    cout << "Division of c and b is " << c / b << endl; // 5 / 3 = 1
    cout << "Modulus of c and b is " << int(c) % b << endl;
}