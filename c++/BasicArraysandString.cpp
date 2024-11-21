#include<bits/stdc++.h>
using namespace std;
//array is used to store multiple elements of similar datatypes
// modification and operation in an array is possible
// indexing in an array starts from 0(zero based indexing )
// everything must be of similar datatype
int main(){
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> endl;
    arr[3]+=10;//modification or airthematic operation
    cout << arr[3];
    // 2D array:-
    // collection of data in the form of rows and matrices
    // if we dont assign any value it will assign itself a garbage value
    int arr[3][5];
    // string:-
    // stores every caharacters in terms of indexes.
    string s ="striver";
    int len = s.size();// fuction used to evaluate length
    s[len-1] = 'z';//modification in string is possible
    cout << s[len-1];
    return 0;
}