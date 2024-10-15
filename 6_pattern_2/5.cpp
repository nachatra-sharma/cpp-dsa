// print this pattern
// a 
// b b 
// c c c 
// d d d d 
// e e e e e 
#include<iostream>
using namespace std;
int main() {
    char c = 'a';
    for (int row = 1; row <= 5; row++){
        for (int col = 1; col <= row; col++){
            cout << char((c + row) - 1) << " ";
        }
        cout << endl;
    }
}