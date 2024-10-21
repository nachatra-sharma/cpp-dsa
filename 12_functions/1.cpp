#include<iostream>
using namespace std;

// check if a number is prime or not
int checkPrime(int number){
    if(number <= 1){
        return 0;
    }else if ( number == 2){
        return 1;
    }else {
        for (int i = 2; i <= number / 2; i++){
            if(number % i == 0){
                return 0;
                break;
            }
        }
    }
    return 1;
}

// check if a number is factorial or not
int findFactorial(int number) {
    int sum = 1;

    for (int i = 1; i <= number; i++) {
        sum *= i;
    }

    return sum;
}

int main() {
    int number1, number2;

    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    
    cout << checkPrime(number1) << endl;
    cout << findFactorial(number1) << endl;

    cout << checkPrime(number2) << endl;
    cout << findFactorial(number2) << endl;

    cout << checkPrime(number2 - number1) << endl;
    cout << findFactorial(number2 - number1) << endl;

}