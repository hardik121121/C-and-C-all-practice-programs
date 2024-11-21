#include<bits/stdc++.h>
using namespace std;
/*
  1
  01
  101
  0101
  10101
  010101


*/
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int start;
        if(i%2==0){
            start =1;
        }else{
            start =0;
        }
        for(int j=0;j<=i;j++){
            cout << start;
            start = 1-start;
        }
        cout << endl;
    }
    return 0;
}