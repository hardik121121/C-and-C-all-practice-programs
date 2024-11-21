#include<bits/stdc++.h>
using namespace std;
//Functions are set of code which performs something for you.
//functions are used to modularise code
// functions are used to increase redability
// functions are used to use same code multiple times 
// types of functions:-
//1. void-does not return anything
//2. return-
//3. parameterised-
//4. non-parameterised-
void  printName(){// void function example
    cout << "Striver" << endl;
}
void printName2(string name1, string name2){//parameterissed function example
 cout << "hey " << name1 << endl;
 cout << "hey "<< name2 << endl;
}
int printSum(int num1, int num2){// return example
// take two numbers as input and print their sum
 int sum = num1 + num2;
  return sum;
}
int  maxx(int num1, int num2){
    if(num1>num2){
        return num1;
    }else{
        return num2;
    }
}
int minn(int num1, int num2){
    if(num1<num2){
        return num1;
    }else{
        return num2;
    }
}
int main(){
    string name;
    string name1;
    string name2;
    int num1,num2;
    cin >> name1;
    cin >> name2;
    cin >> num1 >> num2 ;
 printName();
 printName2(name1,name2);
 int res = printSum(num1,num2);
 int minimum = minn(num1,num2);
 cout << minimum << endl;
 int maximum = maxx(num1,num2);
 cout << maximum << endl;
 cout << res << endl;
 return 0;
}