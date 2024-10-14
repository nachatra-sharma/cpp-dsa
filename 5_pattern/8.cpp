// print this pattern
// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e

#include<iostream>
using namespace std;
int main() {
    char name = 'a';
    int col = name;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = col; j <= col + 4; j++){
            cout << char(j) << " ";
        }
        cout << endl;
    }
}