// find the missing number inside the array

#include<iostream>
using namespace std;
int main(){
    int array[5] = {1, 3, 4, 5, 6};
    int sum = 0;
    int n, answer = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        answer += i;
    }

    for (int i = 0; i <= (sizeof(array) / sizeof(array[0])) - 1; i++) {
        sum += array[i];
    }

    answer -= sum;

    cout << answer << endl;
}