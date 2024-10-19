// print table of a given number
#include<iostream>
using namespace std;
int main() {
    int n, i = 1;
    cout << "Enter a number: ";
    cin >> n;
    while(i <= 10) {
        cout << n * i << endl;
        i++;
    }
}