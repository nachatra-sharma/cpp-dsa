// rotate array by 1

#include<iostream>
using namespace std;
int main() {
    int array1[6] = {2, 7, 4, 11, 5, 8};
    int array2[6];
    int length = sizeof(array1) / sizeof(array1[0]) - 1; // 5
    
    for (int i = 0; i <= length - 1; i++) {
        array2[i + 1] = array1[i];
    }

    array2[0] = array1[length];

    for (int i = 0; i <= length; i++){
        array1[i] = array2[i];
        
    }

    for (int i = 0; i <= length; i++){       
        cout << array1[i] << endl;
    }
}