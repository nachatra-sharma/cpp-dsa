// print this pattern
//         A 
//       A B 
//     A B C 
//   A B C D 
// A B C D E

#include<iostream>
using namespace std;
int main() {
    int n;
    char name = 'A';

    cout << "Enter a number: ";
    cin >> n;
    
    for (int row = 1; row <= n; row++) {
        
        for (int space = 1; space <= n - row; space++) {
            cout << "  ";
        }

        for (int j = 1; j <= row; j++) {
            cout << char((name) + j - 1) << " ";
        }

        cout << endl;
    }
}