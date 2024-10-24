// fibonnaci series

#include<iostream>
using namespace std;
int main() {
    int n, answer;
    int array[100] = {0, 1};
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 2; i < n; i++) {
        array[i] = array[i - 2] + array[i - 1];
    }

    cout << "The element is: " << array[n - 1] << endl;
}