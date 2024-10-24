// reverse the array - okay solution

#include<iostream>
using namespace std;
int main() {
    int temp;
    int arr[6] = {6, 11, 7, 4, 8, 9};
    int length = (sizeof(arr) / sizeof(arr[0])) - 1;
    for (int i = 0; i <= (length / 2); i++) {
        temp = arr[i];
        arr[i] = arr[length - i];
        arr[length - i] = temp;
    }

    for (int i = 0; i <= length;i++){
        cout << arr[i] << endl;
    }
}