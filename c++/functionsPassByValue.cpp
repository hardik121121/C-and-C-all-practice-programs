#include<bits/stdc++.h>
using namespace std;
// call by value
void doSomething(int num){
    cout << num << endl;
    num+=5;
    cout << num << endl;
    num+=5;
    cout << num << endl;
    // In call by value only a copy of a variable goes to another functionand the changess are performed within that another function, but the original value within the main function remains the same.
    // therefore the output here comes:-
    //10
    //15
    //20
    //10--- because this value got executed from main().
    }
int main(){
    int num=10;
    doSomething(num);
    cout << num << endl;
    return 0;
}

