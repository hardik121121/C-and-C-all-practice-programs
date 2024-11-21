#include<bits/stdc++.h>
using namespace std;
/*
        Pattern 17:-

        A
       ABA
      ABCBA
     ABCDCBA

*/
int main(){
    int n;
    cin >> n;
   for(int i=0;i<n;i++){
    //space
    for(int j=0;j<n-i-1;j++){
        cout << " ";
    }
    // characters
    char ch = 'A';
    int breakpoint = (2*i+1)/2;
    for(int j=1;j<=2*i+1;j++){
        cout << ch;
        if(j<=breakpoint){
        ch++;
        }else{
            ch--;
        }
    }
    // space
    for(int j=0;j<n-i-1;j++){
        cout << " ";
    }
    cout << endl;
    
   }
    return 0;
}