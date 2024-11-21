#include<bits/stdc++.h>
using namespace std;
// Vector is a container type
void explainVector() {
    // dynamic container in which modification of storing capacity is possible unlike array.
    vector<int> v;
    // Some defined functions in vectors:-
    v.push_back(1);// push_back() will push the value passed inside the vector 
    v.emplace_back(2);//emplace_back() will dynamically increase the size of the vector and will push the passed value at last
// emplace_back() is comparitively faster than push_back() because emplace_back would construct the object immediately in the vector, while push_back, would first construct an anonymous object and then would copy it to the vector.
       
    // Vectors can also be of paired datatype:-
    vector<pair<int,int>> vec;
    // For using push_back in paired vector curly braces i.e. {} is very necessary:-
    vec.push_back({1,2});
    // For using emplace_back {} is optional because it automatically understands that the values are being entered in paired format:-
    vec.emplace_back(1,2);

    // For a container with already filled lots of values:-
    vector<int> vect(5,100);// this will create a vector containing 5 instances of 100
    vector<int> vect(5);// this will create a container with 5 garbage values or zeroes  depending upon compiler.

    // to copy a container within a vector:-
    vector<int> v1(5,20);
    vector<int> v2(v1);// this will copy all values of container v1 into another vector v2.

    // To access elements within a vector:-(similar to that as of array)
    cout << v[0]; // can also be accessed as cout << v.at(0); but generally people don't use it.
    // another way can be:-(as an iterator)
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";
    //v.begin will access the starting memory address;it++ will increase the value of contigious memory allocation thereby increasing the loop; and *(it) will print the accessed value present at the respective address
    // some other used vectors inpace of v.begin():-
    vector<int>::iterator it = v.end();//points just after the last element 
   // vector<int>::iterator it = v.rend();//points just before the first element
    //vector<int>::iterator it = v.rbegin();//points at the last element present inside the vector

    // v.back():- points at the last element
    cout << v.back() << " ";
   

   //Ways to print a vector:-
   //1. normal by looping:-
   vector<int>::iterator it= v.begin();
   it++;
   cout << *(it) << " ";
   //2. Iterator Wise:-
   for(vector<int>::iterator it = v.begin(); it !=  v.end(); it++){
    cout << *(it) << " ";
   }
   // Also vector<int>::iterator is to long to write again and again so it can be written in a simpler fashion by using 'auto' it automatically assigns it to a vector.
   for(auto it = v.begin(); it!= v.end(); it++){
    cout << *(it) << " ";
   }
   //Note:- Auto means iterate on datatype and not on the iterator.
   //3. Using for each loop:-
   for(auto it : v){
    cout << it << " ";
   } 

   //Ways to delete a vector:-
   //1. using .erase function:-
   v.erase(v.begin()+1);// for{10,20,30,40} it will delete 20 and the new vector will be {10, 30, 40}.
   //2. for deletion of multiple elements from the vector in series:-
   v.erase(v.begin()+2 , v.begin()+4);
   //for{10,20,12,23,35} this will delete 12,23 from the vector and the new vector will be {10,20,35} ; Remember in this series case we need to pass an extra index as an end point which is not included while deletion i.e. deletion takes place till before the passsed last index.


   //Insert function in vector:-
   //1. to insert single element within a vector:-
   vector<int>v(2,100);//defining a vector named v.{100,100}
   v.insert(v.begin(), 300);//this will insert 300 in the begining of the vector container.{300,100,100}
   //To inset 5 after the first element we write:-
   v.insert(v.begin()+1, 5);//{300,5,100,100}
   //2. for insetion of multiple instances within a vector:-
   v.insert(v.begin()+1,2,10);//this will insert two instances of 10 at the first and the second index of the vector container.{300,10,10,100,100}
   //3. to insert a vector into some other vector:-
   vector<int> copy(2,50);//other vector{50,50}
   v.insert(v.begin(), copy.begin(), copy.end());// this will insert the values of copy vector into v vector at the begining of v vector and the values copied are from beginning to end to copy vector i.e. full vector is insserted inside v vector.
   //and the output becomes{50,50,300,10,10,100,100}



   // some other functions in vector:-
   //1. size():-
   cout << v.size();  // gives the no. of elments within a vecto=size.
   //2. pop_back():-
   v.pop_back();  // pops out the last element
   //3. swap():-
   // v1-> {10,20}
   // v2-> {30,40}
   v1.swap(v2); // swaps the given vectors
   //Output:-   v1->{30,40}
   //           v2->{10,20}
   //4. clear:-
   v1.clear(); // erases the entire vector 
   //5. empty():-
   cout << v.empty();
   //checks if the vector has any element iside it, it returns false  and if the vector has no element inside it , it returns true.
   

}
int main(){
    explainVector();
    return 0;
}