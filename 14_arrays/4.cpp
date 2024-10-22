// sum of n numbers between 1 to 100;

#include<iostream>
using namespace std;
int main() {
    int arr[100];
    int n, sum = 0;
    cout << "Enter your number: ";
    cin >> n;
    
    if (n > 100) {
        cout << "Error: Maximum size is 100." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum of all n numbers is: " << sum << endl;
    
    return 0;
}