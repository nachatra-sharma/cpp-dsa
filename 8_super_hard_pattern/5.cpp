// print this pattern
// *                 * 
// * *             * * 
// * * *         * * * 
// * * * *     * * * * 
// * * * * * * * * * * 
// * * * *     * * * * 
// * * *         * * * 
// * *             * * 
// *                 * 


#include<iostream>
using namespace std;

int main() {
    int n, num;
    cout << "Enter a number: ";
    cin >> n;

    for (int row = 1; row <= n; row++){
        for (int star = 1; star <= row; star++) {
            cout << "* ";
        }

        for (int space = 1; space <= 2 * (n - row); space++) {
            cout << "  ";
        }

        for (int star = 1; star <= row; star++){
            cout << "* ";
        }

        cout << endl;
    }

    num = n - 1;

    for (int row = 1; row <= num; row++) {
        for (int star = 1; star <= num - row + 1; star++) {
            cout << "* ";
        }

        for (int space = 1; space <= 2 * (row); space++) {
            cout << "  ";
        }

        for (int star = 1; star <= num - row + 1; star++){
            cout << "* ";
        }
        
        cout << endl;
    }
}