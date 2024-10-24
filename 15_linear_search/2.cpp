// reverse the array - bad solution

#include<iostream>
using namespace std;
int main() {
    int j = 0;
    int arr[6] = {6, 11, 7, 4, 8, 9};
    int temp[6];
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = length - 1; i >= 0; i--){
        temp[j] = arr[i];
        j++;
    }

    for (int i = 0; i < length;i++){
        arr[i] = temp[i];
    }

    for (int i = 0; i < length;i++){
        cout << arr[i] << endl;
    }
}
