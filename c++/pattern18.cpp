#include<bits/stdc++.h>
using namespace std;
/*
        Pattern 18:- 

        E
        DE
        CDE
        BCDE
        ABCDE

*/
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(char j='E'-i;j<='E';j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}