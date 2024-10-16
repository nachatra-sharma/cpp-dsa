// print this pattern
//         1 
//       1 2 
//     1 2 3 
//   1 2 3 4 
// 1 2 3 4 5 
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int row = 1; row <= n; row++) {
        
        for (int space = 1; space <= n - row; space++) {
            cout << "  ";
        }
        
        for (int col = 1; col <= row; col++) {
            cout << col << " ";
        }
        
        cout << endl;
    }
}