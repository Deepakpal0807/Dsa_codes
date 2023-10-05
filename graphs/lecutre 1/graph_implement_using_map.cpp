#include<bits/stdc++.h>
using namespace std;
template<typename t>
class  graph
{
	unordered_map<t,list<t>> mp;
	bool isdirected;
public:
	 graph(bool isdirected=false){
	 	this->isdirected=isdirected;
	 }

	void addedge(t u, t v){
		mp[u].push_back(v);
		if(!isdirected){
			mp[v].push_back(u);
		}
	}
	 void print(){
       for(pair<t,list<t>>x: mp){
       	cout<<x.first<<" : ";
       	for(t neighbour: x.second){
       		cout<<neighbour<<" ";
       	}
       	cout<<endl;
       }
	}
	
	
};

int main(){
	// graph<int> g;  //specify the type of generic pointer..

	// g.addedge(1,0);
	// g.addedge(0,2);
	// g.addedge(2,3);
	// g.addedge(1,3);
	// g.addedge(2,4);
	// g.addedge(3,4);

	// g.print();

	graph<string> g;

	g.addedge("Deepak","Goru");
	g.addedge("Deepak","Rohit");
	g.addedge("Goru","sivani");
	g.addedge("Rohit","Sneha");
	g.addedge("Deepak","Sneha");

	g.print();
	
}