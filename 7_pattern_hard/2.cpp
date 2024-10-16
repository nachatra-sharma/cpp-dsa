// print this pattern
//         1 
//       2 2 
//     3 3 3 
//   4 4 4 4 
// 5 5 5 5 5 

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int row = 1; row <= n; row++) {
        for (int space = 1; space <= n - row; space++){
            cout << "  ";
        }

        for (int col = 1; col <= row; col++){
            cout << row << " ";
        }
        cout << endl;
    }
}