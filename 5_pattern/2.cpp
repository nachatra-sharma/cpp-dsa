// print this pattern
// 10 10 10 10 10 
// 10 10 10 10 10 
// 10 10 10 10 10 
// 10 10 10 10 10

#include<iostream>
using namespace std;
int main(){
    for (int row = 1; row <= 4; row++){
        for (int j = 1; j <= 5;j++){
            cout << 10 << " ";
        }
        cout << endl;
    }
}