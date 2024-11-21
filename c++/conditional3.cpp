#include<bits/stdc++.h>
using namespace std;
/*
Take the age from the user and then decide accordingly:-
1. If age < 18,
print -> not elegible for job;
2. If age >=18 and age<=54,
print -> "eligible for job";
3. If age >=55 and age<=57,
print -> " eligible for job, but reteriment soon. "
4. If age >57,
print -> "retirement time."
*/
int main(){
    int age;
    cin >> age;
    if(age<18){
        cout << " Not eligible for a job" << endl;
    }else if(age>=18 && age<=54){
        cout << "eligible for job " << endl;
    }else if(age >=54 && age<=57){
        cout << "eligible for job , but retirement soon" << endl;
    }else if(age>57){
        cout << "retirement time" << endl;
    }
    return 0;
    
}