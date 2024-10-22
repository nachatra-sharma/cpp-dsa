#include<iostream>
#include<limits.h>

using namespace std;
int main() {
    int arr[5] = {3, 5, 12, -112, 112};
    int max = INT_MIN;
    // how to find length of an array
    int length = (sizeof(arr) / sizeof(arr[0]));
    for (int i = 0; i < length; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << "Maximum number of the array is: " << max << endl;
}