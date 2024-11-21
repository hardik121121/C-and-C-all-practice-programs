#include<bits/stdc++.h>
using namespace std;
/*
       Pattern 19:-


       **********
       ****  ****
       **     ***
       **      **
       *        *
-------------------------- Divide this pattern into two halves.
       *        * 
       **      **
       ***    ***
       ****  ****
       **********


*/
int main(){
    int n;
    cin >> n;
    // For First Half
    int initialSpace=0;
    for(int i=0;i<n;i++){
        //star
        for(int j=1;j<=n-i;j++){
            cout << "*";
        }
        //space
        for(int j=0;j<initialSpace;j++){
                 cout << " ";
        }
        //star
        for(int j=1;j<=n-i;j++){
            cout << "*";
        }
        initialSpace +=2;
        cout << endl; 
       
    }
    // second half of the pattern
    int laterSpace=2*n-2;
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        //space
        for(int j=0;j<laterSpace;j++){
                cout << " ";
        }
        //star
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        laterSpace -=2;
        cout  << endl;

    }
    return 0;
}