#include<bits/stdc++.h>
using namespace std;
class customer
{
public:
	int age;
	double balance;

	customer(int age,int balance){
		this->age=age;
		this->balance=balance;
	}

		
};
class mycomparitor{
public:
	bool operator()(customer a,customer b){
       if(b.age<a.age){
       	return true; //swap is needed.
       }
       //swap is not needed.
       return false;
	}
};

int main(){
	priority_queue<customer,vector<customer>,mycomparitor>  q;

	q.push(customer(17,1000));
	q.push(customer(18,500));
	q.push(customer(19,1700));
	q.push(customer(21,900));
	q.push(customer(23,1900));
	q.push(customer(22,2500));


	while(!q.empty()){
		customer c=q.top();
		cout<<c.age<<" "<<c.balance<<endl;
		q.pop();
	}


}