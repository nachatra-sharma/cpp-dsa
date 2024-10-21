// leap year

#include<iostream>
using namespace std;
int main() {
    int year;
    bool isLeap;
    cout << "Enter a year: ";
    cin >> year;
    
    if(year % 400 == 0)
        isLeap = true;
    else if((year % 4) == 0 && (year % 100) != 0)
        isLeap = true;
    else
        isLeap = false;

    if (isLeap)
        cout << "is a leap year";
    else
        cout << "is not a leap year";
}