#include<bits/stdc++.h>
using namespace std;
class mycomparitor
{
public:
	// b is the newly inserted node and a is the parent of the newly inserted node..
	//b<a  means swap is needed
	//else swap is not needed
	 bool operator()(int a,int b){
	 	if(b<a){ //swap is needed..
	 		return true;
	 	}

	 	//else 
	 	return false;  //means swap are not needed..
	 }
	
};
int main(){
	// priority_queue<int,vector<int>,greater<int>> q;
	priority_queue<int,vector<int>,mycomparitor> q;

	q.push(9);
	q.push(1);
	q.push(3);
	q.push(5);
	q.push(7);
	q.push(2);
	q.push(4);
	q.push(6);
	q.push(8);

	cout<<q.size()<<endl;

	while(!q.empty()){
		cout<<q.top()<<" ";
		q.pop();
	}
	cout<<endl;
    q.empty()? cout<<"heap is empty !":
               cout<<"heap is not empty!";
}