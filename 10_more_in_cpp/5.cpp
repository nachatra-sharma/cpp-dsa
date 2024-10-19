// do while loop - sum of n numbers

#include<iostream>
using namespace std;
int main() {
    int n, i = 1, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    do {
        sum += i;
        i++;
    }while (i <= n);
    
    cout << "The sum of n numbers is " << sum << endl;
}