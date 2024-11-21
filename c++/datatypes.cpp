#include<bits/stdc++.h>
using namespace std;
int main(){
     int x;
    // for positive or negative integers without decimal value.
    cin >> x;
    cout << x << endl;
    long y;
    //  higher range than int for positive or negative integers without  decimal value.
    cin >> y;
    cout << y << endl;
    long long z;
    // higher range than long for positive or negative integers without decimal value.
    cin >> z;
    cout << z << endl;
    float w;
    // for fracional integers
    cin >> w;
    cout << w << endl;
    double r;
    // higher range than float for fractional integers.
    cin >> r;
    cout << r << endl;
    long double s;
    // higher range than double for fractional integers.
    cin >> s;
    cout << s << endl;

    // for string and characters we use stering and getline.
    // this only picks sentence before space for eg:- in "hey striver" it will only pick hey.
    string s1;
    cin >> s1;
    cout << s1;
    // so to solve this we will define two strings.
    // this approach will print "hey striver" completely as s2 will pick hey and s3 will pick  striver and "hey striver" will be printed as output.
    string s2;
    string s3;
    cin >> s2 >> s3;
    cout  << s2 << " " << s3;
    // but in order to finally get full output even with space we use getline function.
    // syntax of getline:- getline(cin,variabename);
    string str;
    getline(cin,str);
    cout << str;
    // prints entire line and even considers space but next line will no be printed as soon as you press enter.
    char g='l';
    char t;
    cin >> t;
    cout << g << t;
    return 0;
}