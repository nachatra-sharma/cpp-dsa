#include<iostream>
using namespace std;
int main() {
    int ans = -1;
    int value = 4;
    int array[6] = {10, 20, 7, 11, 8, 4};
    int length = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < length; i++) {
        if(array[i] == value) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}