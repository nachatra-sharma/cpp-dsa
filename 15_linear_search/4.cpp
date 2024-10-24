#include<iostream>
#include<limits.h>
using namespace std;
int main() {
    
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    int arr[7] = {2, 6, 4, 3, 8, 5, 1};
    int length = (sizeof(arr) / sizeof(arr[0])) - 1;
    
    for (int i = 0; i <= length; i++) {
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    for (int i = 0; i <= length; i++){
        if(arr[i] == largest) {
            continue;
        }else if (arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }
    
    cout << secondLargest << endl;
}