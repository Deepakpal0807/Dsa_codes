// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
template<typename T>
class queue{
    T* arr; //store the address of the array first element
    int f;    // index of the last pop element from the arr..
    int r;     //index of the last push element.
    int size;   //size of the fixed queue
    int count;  //no of element on the queue..

    public:
    queue(int val){
        arr=new T[val];
        f=-1;
        r=-1;
        this->size=val;
        count=0;
    }
    void push(T val){
        if(r==size-1){ //over flow condition..
            return ;
        }
         r++;
         count++;
         arr[r]=val;
    }

    void pop(){
        if(f==r ){// count==0 or arr.size()==0  //size is zero..
            return ;
        }
        f++;
        count--;

    }
    T front(){
        return arr[f+1]; //index of the first element of the queue is (f+1)
    }

    int size(){
        return count;
    }

    bool empty(){
        return count==0;
    }
    
};
int main(){
    queue<int> q(5);
     
    //  cout << "size : " << q.size() << endl;
	cout << "empty : " << q.empty() << endl;

	q.push(10);
	q.push(20);
	q.push(30);

	// cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();

	// cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();

	// cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();
	q.empty() ? cout << "Queue is empty!" << endl :
	                 cout << "Queue is not empty!" << endl;

  
    
}