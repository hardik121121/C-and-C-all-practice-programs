#include<bits/stdc++.h>
using namespace std;
/*
  Pattern 10:-
   *
   **
   ***
   ****
   *****
   ****
   ***
   **
   *
*/
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=n-1-i;j>0;j--){
            cout << "*" ;
        }
        cout << endl;
    }

    return 0;
}