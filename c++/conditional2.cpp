#include<bits/stdc++.h>
using namespace std;
/*
A school ha sfollowing rules for grading sytem:-
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
*/
int main(){
    int grade;
    cin >> grade;
    if(grade <25){
        cout << " You got F grade" << endl;
    }else if(grade>=25 && grade<=44){
        cout << "You got E grade" << endl;
    }else if(grade>=45 && grade<=49){
        cout << "You got D grade" << endl;
    }else if(grade>=50 && grade<=59){
        cout << "You got C grade" << endl;
    }else if(grade>=60 && grade<=79){
        cout << "You got B grade" << endl;
    }else if(grade>=80 && grade<=100){
        cout << "You got  A grade" << endl;
    }
return 0;
}