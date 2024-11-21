#include<bits/stdc++.h>
using namespace std;
/*
  
  Pattern 15:-

  
  ABCDE
  ABCD
  ABC
  AB
  A


*/
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(char ch = 'A'; ch<= 'A'+ (n - i - 1); ch++){
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}