// add digits
#include<iostream>
using namespace std;
int main() {
    int num,result, ans = 0;
    cout << "Enter a number num: ";
    cin >> num;
    while(num != 0) {
        result = num % 10;
        ans = ans + result;
        if(num / 10 == 0 && ans / 10 != 0){
            num = ans;
            ans = 0;
        }else {
            num /= 10;
        }
    }
    cout << ans << endl;
}