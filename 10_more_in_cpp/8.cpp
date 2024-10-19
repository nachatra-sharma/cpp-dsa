// switch case

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    switch (n){
        case 1:
            cout << "odd" << endl;
            break;
        case 2:
            cout << "even" << endl; 
            break;
        default:
            cout << "Enter only 1 or 2." << endl;
    }
}