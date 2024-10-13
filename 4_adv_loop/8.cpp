// find the factorial of a number
#include<iostream>
using namespace std;
int main() {
    int number, i = 1;
    long int fact = 1;
    cout << "Enter a number: ";
    cin >> number;
    for(i; i <= number; i++){
        if(number > 0){
            fact *= i;

        }
        else if(number == 0) {
            fact = 1;
            break;
        }
    }
    cout << fact << endl;
}