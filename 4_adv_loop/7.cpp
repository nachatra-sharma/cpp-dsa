// print sum of n natural number

#include<iostream>
using namespace std;
int main(){
    int i, number, sum = 0;
    cout << "Enter a number: ";
    cin >> number;
    for(i = 1; i <= number; i++){
        sum += i;
    }
    cout << sum << endl;
}

/*
we can use sum of n natural number formula here also
sum  of n natural number = (n * (n+1)) / 2; 
*/