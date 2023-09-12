#include<bits/stdc++.h>
using namespace std;
int main(){
	priority_queue<int> p;
	  p.push(9);
   p.push(7);
   p.push(8);

	p.push(5);

p.push(4);
p.push(6);
p.push(3);
p.push(2);
p.push(1);

cout<<p.size();
cout<<endl;

while(!p.empty()){
	cout<<p.top()<<" ";
	p.pop();
}
cout<<endl;
cout<<p.size()<<endl;
}