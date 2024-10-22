// find min number from the array

#include<iostream>
#include<limits.h>
using namespace std;
int main() {
    int answer = INT_MAX;
    int arr[5] = {7, 9, 1, 4, -2};
    for (int i = 0; i <= 4; i++) {
        if(arr[i] < answer)
            answer = arr[i];
    }
    cout << answer << endl;
}