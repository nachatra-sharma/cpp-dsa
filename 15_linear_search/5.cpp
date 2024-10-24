// find the missing number inside the array

#include<iostream>
using namespace std;
int main(){
    int array[5] = {1, 3, 4, 5, 6};
    int answer = 0;
    for (int i = 1; i <= 5; i++){
        bool found = false;
        for (int j = 0; j <= 4; j++){
            if(array[j] == i) {
                found = true;
                break;
            }
        }

        if(!found) {
            answer = i;
            break;
        }
    }
    cout << answer << endl;
}