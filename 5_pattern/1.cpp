// print this pattern
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * *

#include<iostream>
using namespace std;
int main(){
    for (int row = 1; row <= 4; row++) {
        for (int col = 1; col <= 5; col++) {
            cout << "* ";
        }
        cout << endl;
    }
}