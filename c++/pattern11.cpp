#include<bits/stdc++.h>
using namespace std;
/*
 Pattern 11:-

 1
 01
 101
 0101
 10101

*/
int main(){
    int n;
    int start=1;
    cin >> n;
    for(int i=0;i<n;i++){
    if(i%2==0){
       start =1;
    }else{
        start=0;
    }for(int j=0;j<=i;j++){
        cout << start;
        start=1-start;
    }
    cout << endl;
    }
    return 0;
}