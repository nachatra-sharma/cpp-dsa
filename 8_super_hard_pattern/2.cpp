// print this pattern
//         1         
//       1 2 1       
//     1 2 3 1 2     
//   1 2 3 4 1 2 3   
// 1 2 3 4 5 1 2 3 4 

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int row = 1; row <= n; row++) {
        // space here
        for (int space = 1; space <= n - row; space++) {
            cout << "  ";
        }

        // number here
        for (int num = 1; num <= row; num++) {
            cout << num << " ";
        }

        // number here
        for (int num = 1; num <= row - 1; num++) {
            cout << num << " ";
        }

        // space here
        for (int space = 1; space <= n - row; space++)
        {
            cout << "  ";
        }

        cout << endl;
    }
}