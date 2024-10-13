// print number in reverse order

#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    for(number; number >= 1; number--){
        cout << number << " ";
    }
    cout << endl;
}