#include<bits/stdc++.h>
using namespace std;
void explainStack(){

  // declaration:-
  stack<int> st;

  //Note:-stack works o the concept of lifo(Last in first Out).

  // stack mainly has 2 important functions i.e push and pop:-
  st.push(1); //{1}
  st.push(2); //{2,1}
  st.push(3); //{3,2,1}
  st.push(3); //{3,3,2,1}
  // it also has some other generic functions:-
  st.emplace(5); //{5,3,3,2,1}
  //emplace also works as push
   
   cout << st.top(); // prints the last entered element in the stack therefor prints {5}.
   st.pop(); //pop function deletes the element entered at latest because of last in comes first out.therefore remaining stack becomes{3,3,2,3}

   cout << st.size(); //4 - prints the no of elemets present in the stack
   cout << st.empty(); //checks wether the stack is empty or not and prints true or false accordingly . in this case it wwill return "false" because the stack still has 4 elements in it.

   stack<int> st1,st2;
   st1.swap(st2);//swaps the values of st1 with st2 completely.


   //note:- here time complexity of all functions is O(1).{push,pop,top,etc;}

}


int main(){
    explainStack();
    return 0;
}