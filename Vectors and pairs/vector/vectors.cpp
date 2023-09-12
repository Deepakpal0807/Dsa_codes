/*

	Vectors Part I

	How to create a vector ?
		> use empty container constructor (default constructor)
	How to add elements to a vector ?
	    > use vector::push_back to add element at back (constant time operator)
	How to remove elements from a vector ?
	    > use vector::pop_back to remove element from back (constant time operation)
	    > use vector::clear to remove all the elements from a vector
	How to check size of a vector ?
		> use vector::size to know number of elements in a vector
		> use vector::capacity to know current capacity of the vector
		> use vector::max_size to know maximum number of elements that can added in a vector
	How to check if a vector is empty ?
	    > use vector::empty or check if vector size is 0
	How to access elements in a vector at a particular index ?
	    > use vector::operator[]
	    > use vector::at
	How to iterate over elements in a vector ?
	    > use indexing like arrays
	    > use an iterator
	    > use forEach loop

*/



#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;


    v.push_back(10); //on avg push back take constant time..
    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;


    v.push_back(20);
    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

    v.push_back(30);
    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

    v.push_back(40);
    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

    v.push_back(50);
    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;


    //size is the space ocuppied and capacity is the total space available for the element

    //iteration over the vector..
    for(int i=0;i<v.size();i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;


    //iterate using for each loop..
    for(int x :v){
        cout<<x<<" ";

    }
    cout<<endl;


    //iterate using the address
    for(auto it=v.begin(),end=v.end();it!=end;it++){
        cout<<*it<<" ";
    }
    cout<<endl;




    v.pop_back(); //capacity remains same..after delete an element..
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
        cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

//    to delete all the element from vector..

   v.clear();
   for(auto x: v){
    cout<<x<<" ";
   }
   cout<<endl;
       cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;



    v.empty()? cout<<" Vector is empty"<<endl:   //to check the vector is empty or not and it will return true or false..
               cout<<" Vector is not empty"<<endl;

}