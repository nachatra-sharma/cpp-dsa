// check if number is prime or not

#include<iostream>
using namespace std;
int main(){
    int i = 2, number;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> number;
    if(number <= 1){
        isPrime = false;
    }else if(number == 2){
        isPrime = true;
    }else {
        for(i; i <= number / 2; i++){
            if(number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if(isPrime) {
        cout << "Number is prime" << endl;
    }else {
        cout << "Number is not prime" << endl;
    }
    return 0;
}