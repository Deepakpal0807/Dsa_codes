#include<iostream>
#include<deque>
using namespace std;
template<typename T>
class queue{
    deque<T> q;  //dynamics array.. 
    public:
    void push(T val){
        q.push_back(val);
    }
    void pop(){
        if(q.empty()){   //dynamic array is empty..
            return ;
        }
        
        q.pop_front();

    }

    T front(){
        return q.front();

    }
     
     bool empty(){
        return q.empty();
     }

     int size(){
        return q.size();
     }
    
};
int main(){

	queue<int> q;

	cout << "size : " << q.size() << endl;
	cout << "empty : " << q.empty() << endl;

	q.push(10);
	q.push(20);
	q.push(30);

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();
	q.empty() ? cout << "Queue is empty!" << endl :
	                 cout << "Queue is not empty!" << endl;

	// deque<int> dd = {1, 2, 3, 4, 5};

	// cout << dd[0] << endl;

	return 0;

}