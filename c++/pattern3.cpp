#include<bits/stdc++.h>
using namespace std;
/*
Pattern 3:- 

1
12
123
1234
12345

*/
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}