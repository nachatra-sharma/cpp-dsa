// reverse a number

#include<iostream>
using namespace std;
int main() {
    int answer = 0, result, number, temp;
    cout << "Enter a number: ";
    cin >> number;
    temp = number;

    while (temp != 0){
        result = temp % 10;
        if(answer > INT8_MAX / 10 || answer < INT8_MIN / 10)
            return 0;
        answer = answer * 10 + result;
        temp /= 10;
    }

    cout << "The reverse of the number " << number << " is " << answer << endl;
}