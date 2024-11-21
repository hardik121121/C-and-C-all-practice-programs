#include<bits/stdc++.h>
using namespace std;
//pass by reference.
void doSomething(int &num){// we just apply this &'and' operator which brings the original value itself to perform changes in it.
    cout << num << endl;
    num+=5;
    cout << num << endl;
    num+=5;
    cout << num << endl;
    // In call by reference original value of the variable itself goes to another functionand the changess are performed upon the original value since it was passed by its address. and the original value within the main function gets changed.
    // therefore the output here comes:-
    //10
    //15
    //20
    //20--- because this value got executed from main().
    }
int main(){
    int num=10;
    doSomething(num);
    cout << num << endl;
    return 0;
}