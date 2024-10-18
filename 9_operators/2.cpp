// arithematic operators - uniary opertors

#include<iostream>
using namespace std;
int main() {
    int a, b; // a = 10, b = 20
    cout << "Enter a number a: ";
    cin >> a;
    cout << "Enter a number b: ";
    cin >> b;

    cout << a++ << endl; // 10 -> first use the value then inc the value
    cout << ++a << endl; // 12 -> first inc the value then use the value
    cout << a << endl; // 12

    cout << b-- << endl; // 20 -> first use the value then desc the value
    cout << --b << endl; // 18 -> first inc the value then use the value
    cout << ++b << endl; // 19
    cout << b++ << endl; // 19
    cout << b << endl; // 20
}