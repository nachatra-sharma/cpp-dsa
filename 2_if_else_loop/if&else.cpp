// first program -> ask user to input the package count then accept the package if it is greater than 10 else reject it
#include<iostream>
using namespace std;
int main(){
    int package;
    cout << "Enter the package value: ";
    cin >> package;
    if(package > 10){
        cout << "Accepted" << endl;
    }else {
        cout << "Rejected" << endl;
    }
}

// second program -> ask user to input marks and find out if he passed or fail
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter your marks ";
    cin >> marks;
    if(marks >= 33){
        cout << "you passed the exam" << endl;
    }else {
        cout << "You failed the exam" << endl;
    }
}

// third program -> to figure out which number is greater
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter first number ";
    cin >> a;
    cout << "Enter second number ";
    cin >> b;
    if(a > b){
        cout << "a is greater than b" << endl;
    }else {
        cout << "b is greater than a" << endl;
    }
}

// fourth program -> check if number is even or odd
#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if(number % 2 == 0){
        cout << "Number is even" << endl;
    }else {
        cout << "Number is odd" << endl;
    }
}

// fifth program -> check if a person is adult or teen
#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age >= 18) {
        cout << "You're an adult" << endl;
    }else {
        cout << "You're a teenager" << endl;
    }
}

// sixth program -> check if entered number is positive, negative or zero
#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if(number > 0) {
        cout << "Number is positive" << endl;
    }else if(number <  0){
        cout << "Number is negative" << endl;
    }else {
        cout << "Number is equal to zero" << endl;
    }
}

// seventh program -> find out a char is vowel or consonant
#include<iostream>
using namespace std;
int main(){
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        cout << "Character is vowel" << endl;
    }else {
        cout << "Character is consonant" << endl;
    }
}

// eight program -> print the name of week acc to number
#include<iostream>
using namespace std;
int main(){
    int day;
    cout << "Enter a number from 1 to 7: ";
    cin >> day;
    if(day == 1){
        cout << "Monday" << endl;
    }else if (day == 2){
        cout << "Tuesday" << endl;
    }else if(day == 3){
        cout << "Wednesday" << endl;
    }else if (day == 4){
        cout << "Thursday" << endl;
    }else if (day == 5) {
        cout << "Friday" << endl;
    }else if ( day == 6){
        cout << "Saturday" << endl;
    }else if (day == 7){
        cout << "Sunday" << endl;
    }else {
        cout << "Enter a valid number between 1 to 7" << endl;
    }
}