// print the table of the given number

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 1; i <= 10; i++){
        cout << i * n << endl;
    }
}