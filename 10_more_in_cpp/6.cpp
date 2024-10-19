// break 

#include<iostream>
using namespace std;
int main() {
    int n;
    do {
       
        cout << "Enter a number: ";
        cin >> n;

        if(n % 2 == 0)
            break;

    } while (true);
}