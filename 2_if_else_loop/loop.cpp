// first program -> print hello world 5 times
#include<iostream>
using namespace std;
int main() {
    for(int i = 1; i <= 5; i++){
        cout << "Hello World" << endl;
    }
}


// print n natural numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << i << endl;
    }
}

// print square of numbers from 1 to n
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << "square of number " << i << " is " << i * i << endl;
    }
}

// print all even number till 20
#include<iostream>
using namespace std;
int main(){
    for(int i = 1; i <= 20; i++){
        if(i % 2 == 0) cout << i << endl;
    }
}