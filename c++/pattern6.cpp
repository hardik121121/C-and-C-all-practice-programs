#include<bits/stdc++.h>
using namespace std;
/*
Pattern 6:- 

12345
1234
123
12
1

*/
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}