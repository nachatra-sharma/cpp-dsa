// continue - if entered number is even then continue else print the number


#include<iostream>
using namespace std;
int main() {
    int n, i = 1;
    do {
        cout << "Enter a number: ";
        cin >> n;
        i++;

        if(n % 2 == 0) {
            continue;
        }

        cout << n << endl;
    } while (i <= 10);
}