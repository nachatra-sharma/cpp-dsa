// sum of 2 numbers

#include<iostream>
using namespace std;

int sum(int firstNumber, int secondNumber){
    return firstNumber + secondNumber;
}

int main(){

    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << "The sum of two number is " << sum(a, b) << endl;
}