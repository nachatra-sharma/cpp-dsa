// calculate the power of a number

#include<iostream>
using namespace std;
int main(){
    int number, power, answer = 1;
    cout << "Enter a number: ";
    cin >> number;
    cout <<"Enter the degree: ";
    cin >> power;
    for(int i = 1; i <= power; i++){
        answer *= number;
    }
    cout << answer << endl;
}