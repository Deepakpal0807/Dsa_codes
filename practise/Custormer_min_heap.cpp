#include<bits/stdc++.h>
using namespace std;

class customer{
public:
	string name;
	int age;
	double credits;

	customer(string name,int age,double credits){
		this->name=name;
		this->age=age;
		this->credits=credits;
	}
};
class myagecomparitor
{
public:
	// b is the newly inserted node and a is the parent of the newly inserted node..
	//b<a  means swap is needed
	//else swap is not needed
	 bool operator()(customer a,customer b){

	 	if(b.credits<a.credits){ //swap is needed..
	 		return true;
	 	}

	 	//else 
	 	return false;  //means swap are not needed..
	 }
	
};

int main(){
	// priority_queue<int,vector<int>,greater<int>> q;
	priority_queue<customer,vector<customer>,myagecomparitor> q;

	q.push(customer("Deepak",19,2000));
	q.push(customer("Armaan",20,500));
	q.push(customer("Sneha",20,2100));
	q.push(customer("Pratham",21,3000));
	q.push(customer("guri",24,5000));
	
	

	
	cout<<q.size()<<endl;

	while(!q.empty()){
		customer c=q.top();
		cout<<c.name<<" "<<c.age<<" "<<c.credits<<endl;
		q.pop();
	}
	cout<<endl;
    q.empty()? cout<<"heap is empty !":
               cout<<"heap is not empty!";
}