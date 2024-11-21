#include<bits/stdc++.h>
using namespace std;
void explainPair(){
    // for 2 pair:-
    pair<int,int> p = {1,3};
    cout << p.first << " " << p.second << endl;
    // for more than two variables - use nested pairs:-
    pair<int , pair<int,int>> t = {1,{3,4}};
    cout << t.first << " " << t.second.first << " " << t.second.second << endl;
    // for array of paired values:-
    pair<int,int> arr[] = {{1,3},{5,1},{1,4}};
    cout << arr[1].second ;
}
int main(){
    explainPair();
    return 0;
}