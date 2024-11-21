#include<bits/stdc++.h>
using namespace std;
/*
       Pattern 20:-


       *        *
       **      **
       ***    ***
       ****  ****
       **********
       ****  **** 
       ***    ***
       **      **
       *        *


*/
int main(){
    int n;
    cin >> n;
    int initialSpace=2*n-2;
    for(int i=1;i<=2*n-1;i++){
       int stars = i;
       if(i>n){
        stars = 2*n - i;
       }
       //stars
       for(int j=1;j<=stars;j++){
        cout << "*";
       }
       //spaces
       for(int j=1;j<=initialSpace;j++){
        cout << " ";
       }
       //stars
       for(int j=1;j<=stars;j++){
        cout << "*";
       }
       cout << endl;
       if(i<n){
        initialSpace -= 2;
       }else{
        initialSpace += 2;
       }
    } 
    return 0;
}