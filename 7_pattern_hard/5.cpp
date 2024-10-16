// print this pattern
//         1 
//       2 1 
//     3 2 1 
//   4 3 2 1 
// 5 4 3 2 1 

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int space = 1; space <= n - row; space++) {
            cout << "  ";
        }
        for (int num = row; num >= 1; num--){
            cout << num << " ";
        }

        cout << endl;
    }
}