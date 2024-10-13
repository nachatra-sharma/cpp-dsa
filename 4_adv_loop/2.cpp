// print char from a to z
#include<iostream>
using namespace std;
int main(){
    char a = 96;
    for(int i = 1; i <= 26; i++){
        cout << char(a + i) << " ";
    }
    cout << endl;
}

#include<iostream>
using namespace std;
int main(){
    char name = 'a';
    for(name; name <= 122; name++){
        cout << name << " ";
    }
    cout << endl;
}

#include<iostream> 
using namespace std;
int main(){
    char name;
    for(name = 'a'; name <= 'z'; name++){
        cout << name << " ";
    }
    cout << endl;
}