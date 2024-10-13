// Fibonacci series of a number
#include<iostream>
using namespace std;
int main(){
    int first = 0, second = 1, number, answer, i = 1;
    cout << "Enter fibonnaci position number: ";
    cin >> number;
    if(number == 1){
        cout << first << endl;
    }else if(number == 2){
        cout << second << endl;
    }else {
        for(i; i <= number - 2; i++) {
            answer = first + second;
            first = second;
            second = answer;
        }
       cout << answer << endl;
    }
}